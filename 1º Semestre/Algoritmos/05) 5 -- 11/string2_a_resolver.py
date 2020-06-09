# Copyright 2010 Google Inc.
# Licensed under the Apache License, Version 2.0
# http://www.apache.org/licenses/LICENSE-2.0

# Google's Python Class
# http://code.google.com/edu/languages/google-python-class/

# Exercícios extras

# G. verbing
# Dada uma string, caso seu comprimento seja pelo menos 3,
# adiciona 'ing' no final
# Caso a string já termine em 'ing', acrescentará 'ly'.
def verbing(s):
  if len(s) > 3 and s[-3:] != 'ing':
    s += 'ing'
  elif s[-3:] == 'ing':
    s += 'ly'
  return s

# H. not_bad
# Dada uma string, procura a primeira ocorrência de 'not' e 'bad'
# Se 'bad' aparece depois de 'not' troca 'not' ... 'bad' por 'good'
# Assim 'This dinner is not that bad!' retorna 'This dinner is good!'
def not_bad(s):
  flag = False
  find_not = s.find('not')
  find_bad = s.find('bad')
  if find_not < find_bad:
    if s[-1:] == '!':
      exc = '!'
      flag = True
    if flag:
      s = s[:find_not]
      s = s + 'good'
      s = s.replace('not', '')
      s = s + exc
    else:
      s = s[:find_not]
      s = s + 'good'
      s = s.replace('not', '')
  return s

# I. inicio_final
# Divida cada string em dois pedaços.
# Se a string tiver um número ímpar de caracteres
# o primeiro pedaço terá um caracter a mais,
# Exemplo: 'abcde', divide-se em 'abc' e 'de'.
# Dadas 2 strings, a e b, retorna a string
#  a-inicio + b-inicio + a-final + b-final
def inicio_final(a, b):
  meio_a = 0
  meio_b = 0
  if len(a) % 2 == 0 and len(b) % 2 == 0:
    print()
    a_inicio = a[0:int((len(a) / 2))]
    a_final = a[int((len(a) / 2)):len(a)]
    b_inicio = b[0:int((len(b) / 2))]
    b_final = b[int((len(b) / 2)):len(b)]
  elif len(a) % 2 == 0 and len(b) % 2 != 0:
    meio_b = int((len(b) / 2) + 0.5)
    a_inicio = a[0:int((len(a) / 2))]
    a_final = a[int((len(a) / 2)):len(a)]
    b_inicio = b[0:meio_b]
    b_final = b[meio_b:len(b)]
  elif len(a) % 2 != 0 and len(b) % 2 == 0:
    meio_a = int((len(a) / 2) + 0.5)
    a_inicio = a[0:meio_a]
    a_final = a[meio_a:len(a)]
    b_inicio = b[0:int((len(b) / 2))]
    b_final = b[int((len(b) / 2)):len(b)]
  elif len(a) % 2 != 0 and len(b) % 2 != 0:
    meio_a = int((len(a) / 2) + 0.5)
    meio_b = int((len(b) / 2) + 0.5)
    a_inicio = a[0:meio_a]
    a_final = a[meio_a:len(a)]
    b_inicio = b[0:meio_b]
    b_final = b[meio_b:len(b)]
  return a_inicio + b_inicio + a_final + b_final

# J. zeros finais
# Verifique quantos zeros há no final de um número inteiro positivo
# Exemplo: 10010 tem 1 zero no fim e 908007000 possui três
def zf(n):
  str_n = str(n)
  cont_zero = 0
  for x in str_n[::-1]:
    if x == '0':
      cont_zero += 1
    else:
      break
  return cont_zero

# K. conta 2
# Verifique quantas vezes o dígito 2 aparece entre 0 e n-1
# Exemplo: para n = 20 o dígito 2 aparece duas vezes entre 0 e 19
def conta2(n):
  cont_2 = 0
  for x in range(n - 1):
    str_x = str(x)
    if len(str_x) == 3:
      if str_x[0] == '2':
        cont_2 += 1
      if str_x[1] == '2':
        cont_2 += 1
      if str_x[2] == '2':
        cont_2 += 1
    elif len(str_x) == 2:
      if str_x[0] == '2':
        cont_2 += 1
      if str_x[1] == '2':
        cont_2 += 1
    elif len(str_x) == 1:
      if str_x == '2':
        cont_2 += 1
  return cont_2

# L. inicio em potencia de 2
# Dado um número inteiro positivo n retorne a primeira potência de 2
# que tenha o início igual a n
# Exemplo: para n = 65 retornará 16 pois 2**16 = 65536
def inip2(n):
  pot = 0
  str_n = str(n)
  resultado = 0
  str_result = str(resultado)
  while not str_result.startswith(str_n):
      resultado = 2 ** pot
      str_result = str(resultado)
      pot += 1
  return pot - 1

def test(obtido, esperado):
  if obtido == esperado:
    prefixo = ' Parabéns!'
  else:
    prefixo = ' Ainda não'
  print ('%s obtido: %s esperado: %s' % (prefixo, repr(obtido), repr(esperado)))

def main():
  print ('verbing')
  test(verbing('hail'), 'hailing')
  test(verbing('swiming'), 'swimingly')
  test(verbing('do'), 'do')

  print ()
  print ('not_bad')
  test(not_bad('This movie is not so bad'), 'This movie is good')
  test(not_bad('This dinner is not that bad!'), 'This dinner is good!')
  test(not_bad('This tea is not hot'), 'This tea is not hot')
  test(not_bad("It's bad yet not"), "It's bad yet not")

  print ()
  print ('inicio_final')
  test(inicio_final('abcd', 'xy'), 'abxcdy')
  test(inicio_final('abcde', 'xyz'), 'abcxydez')
  test(inicio_final('Kitten', 'Donut'), 'KitDontenut')

  print ()
  print ('zeros finais')
  test(zf(10100100010000), 4)
  test(zf(90000000000000000010), 1)

  print ()
  print ('conta 2')
  test(conta2(20), 2)
  test(conta2(999), 300)
  test(conta2(555), 216)

  print ()
  print ('inicio p2')
  test(inip2(7), 46)
  test(inip2(133), 316)
  test(inip2(1024), 10)
  
if __name__ == '__main__':
  main()
