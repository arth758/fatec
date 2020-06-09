def imprimir_tabuleiro(nome, tabuleiro):
    print('Tabuleiro do jogador \"%s\"' %nome)
    for key in sorted(tabuleiro.keys()):
        print(key, ' - ', tabuleiro[key])
    print('     ', '01;02;03;04;05;06;07;08;09;10;11;12;13;14;15'.split(';'), '\n')
    print('() - Peças do tabuleiro\n<> - Peças posicionadas\n~# - Peças destruidas\n')

def criar_tabuleiro():
    tabuleiro = {}
    for letter in 'ABCDEFGHIJLMNOP':
        registro = []
        for linha in range(0,15):
            registro.append('()')
        tabuleiro[letter] = registro
    return tabuleiro

def gerar_dados(nome_arquivo):
    dados = {}
    arquivo = open(nome_arquivo, 'r+')
    linhas = arquivo.read().split("\n")
    for i in linhas:
        if not i.startswith('#'):
            itens = i.split(';')
            dados[itens[0]] = gerar_lista_posicoes(itens[1])
    return dados

def gerar_lista_posicoes(dados):
    lista = []
    for dado in dados.split('|'):
        lista.append(dado.strip())
    return lista

def validar_pecas_nivel1(nome, d_jogador, pecas):
    if (nome == "Jogador 1"):
        j = "J1"
    elif(nome == "Jogador 2"):
        j = "J2"
    status = True
    # Primeira validacao
    for dado in d_jogador.keys():
        for posicao in d_jogador[dado]:
            if posicao[0:1] in 'ABCDEFGHIJLMNOP' and int(posicao[1::-2]) <= 15:
                status = status and True
            else:
                print('Elemento %s é invalido.' %posicao)
                status = status and False
                try:
                    arquivo = open("resultado.txt", "r")
                except FileNotFoundError:
                    arquivo = open("resultado.txt", "w")
                    arquivo.write(j + " ERROR_POSITION_NONEXISTENT_VALIDATION")
                    arquivo.close
    #Segunda validacao
    for dado in d_jogador.keys():
        if len(d_jogador[dado]) != pecas[dado]:
            print('Foram identificadas %d pecas de codigo %s. O esperado são %d pecas.' %(len(d_jogador[dado]), dado, pecas[dado]))
            
            status = status and False
            try:
                arquivo = open("resultado.txt", "r")
            except FileNotFoundError:
                arquivo = open("resultado.txt", "w")
                arquivo.write(j + " ERROR_NR_PARTS_VALIDATION")
                arquivo.close
    return status

# Funcao que configura uma determinada peca no tabuleiro com o valor (caracter) informado
def configurar_peca(posicao, tabuleiro, valor):
    lista = tabuleiro[posicao[0:1]]
    indice = int(posicao[1:])
    lista[indice-1] = valor

# Funcao que verifica se a peca analisada já existe no tabuleiro (validacao de sobreposicao)
def peca_existe(peca, pecas_alocada):
    status = False
    for key in pecas_alocada.keys():
        for posicoes in pecas_alocada[key]:
            for posicao in posicoes:
                if peca == posicao:
                    return not status
    return status

def posicionar_pecas(nome, d_jogador, t_jogador, pecas):
    if (nome == "Jogador 1"):
        j = "J1"
    elif(nome == "Jogador 2"):
        j = "J2"
    pecas_alocadas = {}
    for key in pecas.keys():
        pecas_alocadas[key] = []
    status = True
    # Valida a sobreposicao pecas
    for key in d_jogador.keys():
        if key != 'T':
            for posicao in d_jogador[key]:
                elementos = []
                nposicao = int(posicao[1])
                lposicao = posicao[0:1]
                for indice in range(nposicao,(nposicao + pecas[key])):
                    if not peca_existe(lposicao+str(nposicao), pecas_alocadas):
                        elementos.append(lposicao + str(indice))
                    else:
                        print("Peca sobreposta: %s." %(lposicao + str(indice)))
                        status = status and False
                        try:
                            arquivo = open("resultado.txt", "r")
                            # ajuda = arquivo.readlines()
                            # arquivo.close
                            # arquivo = open("resultado.txt", "w")
                            # print(ajuda)
                            # arquivo.write(ajuda[0])
                            # arquivo.write("\n"+ j + " ERROR_OVERWRITE_PIECES_VALIDATION")
                            # arquivo.close
                        except FileNotFoundError:
                            arquivo = open("resultado.txt", "w")
                            arquivo.write(j + " ERROR_OVERWRITE_PIECES_VALIDATION")
                            arquivo.close
                pecas_alocadas[key].append(elementos)
    # Alocacao das peças no tabuleiro
    if status:
        for key in pecas_alocadas.keys():
            for lista_grp_posicoes in pecas_alocadas[key]:
                for posicao in lista_grp_posicoes:
                    configurar_peca(posicao, t_jogador, '<>')
    else:
        print('ERRO: Foram identificadas sobreposicao de pecas do %s que devem ser ajustadas' %nome)
        try:
            arquivo = open("resultado.txt", "r")
        except FileNotFoundError:
            arquivo = open("resultado.txt", "w")
            arquivo.write("")
            arquivo.close
    return [status, pecas_alocadas]

def executar_jogo(torpedos, pecas_alocadas, tabuleiro):
    alvos_acertados = []
    alvos_restantes = []
    pontuacao = 0
    #Executa as jogadas e computa os acertos
    for torpedo in torpedos:
        for key in pecas_alocadas.keys():
            for grupo in pecas_alocadas[key]:
                if torpedo in grupo:
                    configurar_peca(torpedo, tabuleiro, '~#')
                    if len(grupo) == 1:
                        pontuacao += 2
                    else:
                        pontuacao += 1
                    grupo.remove(torpedo)
                    alvos_acertados.append(torpedo)
                    break
    # Calcula os alvos restantes
    for key in pecas_alocadas.keys():
            for grupo in pecas_alocadas[key]:
                alvos_restantes += grupo
    return [pontuacao, alvos_acertados, alvos_restantes]


#Chamada principal do programa
qtde_pecas = {'1':5, '2':2, '3':10, '4':5, 'T':25}
tm_pecas = {'1':4, '2':5, '3':1, '4':2}
# t_jogador1 = criar_tabuleiro()
tabuleiro = {}
for letter in 'ABCDEFGHIJLMNOP':
    registro = []
    for linha in range(0,15):
        registro.append('()')
    tabuleiro[letter] = registro
t_jogador1 = tabuleiro
t_jogador2 = tabuleiro
# t_jogador2 = criar_tabuleiro()
imprimir_tabuleiro('Jogador 1', t_jogador1)
imprimir_tabuleiro('Jogador 2', t_jogador2)
d_jogador1 = gerar_dados('jogador1.txt')
d_jogador2 = gerar_dados('jogador2.txt')
if not (validar_pecas_nivel1("Jogador 1", d_jogador1, qtde_pecas) and validar_pecas_nivel1("Jogador 2", d_jogador2, qtde_pecas)):
    print("ERRO: Um dos arquivos de entrada fornecidos sao invalidos.\nCorrija o arquivo e execute o jogo novamente.")
else:
    p_jogador1 = posicionar_pecas('Jogador 1', d_jogador1, t_jogador1, tm_pecas)
    p_jogador2 = posicionar_pecas('Jogador 2', d_jogador2, t_jogador2, tm_pecas)
    if (p_jogador1[0] and p_jogador2[0]):
        print('Tabuleiro com as pecas posicionadas...\n\n')
        imprimir_tabuleiro('Jogador 1', t_jogador1)
        imprimir_tabuleiro('Jogador 2', t_jogador2)
        pontuacao1 = executar_jogo(d_jogador1['T'], p_jogador2[1], t_jogador2)
        pontuacao2 = executar_jogo(d_jogador2['T'], p_jogador1[1], t_jogador1)
        imprimir_tabuleiro('Jogador 1', t_jogador1)
        imprimir_tabuleiro('Jogador 2', t_jogador2)
        if pontuacao1[0] > pontuacao2[0]:
            print("Jogador 1 e o campeao com %d pontos. Acertos: %d - Alvos restantes: %d." %(pontuacao1[0],len(pontuacao1[1]),len(pontuacao1[2])))
            print("Jogador 2 e o segundo colocado com %d pontos. Acertos: %d - Alvos restantes: %d." %(pontuacao2[0],len(pontuacao2[1]),len(pontuacao2[2])))
            try:
                arquivo = open("resultado.txt", "r")
            except FileNotFoundError:
                arquivo = open("resultado.txt", "w")
                arquivo.write("J1 "+ len(pontuacao1[1])+"AA " + len(pontuacao1[2])+"AE" + (pontuacao1[0])+"PT")
                arquivo.close
        elif pontuacao2 > pontuacao1:
            print("Jogador 2 e o campeao com %d pontos. Acertos: %d - Alvos restantes: %d." %(pontuacao2[0],len(pontuacao2[1]),len(pontuacao2[2])))
            print("Jogador 1 e o segundo colocado com %d pontos. Acertos: %d - Alvos restantes: %d." %(pontuacao1[0],len(pontuacao1[1]),len(pontuacao1[2])))
            try:
                arquivo = open("resultado.txt", "r")
            except FileNotFoundError:
                arquivo = open("resultado.txt", "w")
                arquivo.write("J2 "+ len(pontuacao2[1])+"AA " + len(pontuacao2[2])+"AE" + (pontuacao2[0])+"PT")
                arquivo.close
        else:
            print("Houve um empate - Jogador 1: %d pontos - Jogador 2: %d pontos." %(pontuacao1[0],pontuacao2[0]))
            print("Jogador 1 - Acertos: %d - Alvos restantes: %d." %(len(pontuacao1[1]),len(pontuacao1[2])))
            print("Jogador 2 - Acertos: %d - Alvos restantes: %d." %(len(pontuacao2[1]),len(pontuacao2[2])))
            try:
                arquivo = open("resultado.txt", "r")
            except FileNotFoundError:
                arquivo = open("resultado.txt", "w")
                arquivo.write("J1 "+ len(pontuacao1[1])+"AA " + len(pontuacao1[2])+"AE" + (pontuacao1[0])+"PT")
                arquivo.write("J2 "+ len(pontuacao2[1])+"AA " + len(pontuacao2[2])+"AE" + (pontuacao2[0])+"PT")
                arquivo.close
exit(0)
