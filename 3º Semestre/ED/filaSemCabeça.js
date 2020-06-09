function funcoes() {
    const Node = (valor = null, prox = null) => {
        return {
            valor,
            prox,
        }
    }

    const addPrimeiro = (valor) => {
        return Node(valor)
    }

    const addNovoValorFinal = (ultimo, valor) => {
        ultimo.prox = Node(valor)
            // try {
            //     ultimo.prox = Node(valor)
            // } catch {
            //     ultimo = Node(valor)
            // }
            // if (ultimo) ultimo.prox = Node(valor)
            // else ultimo = Node(valor)
    }

    const deletePrimeiroValor = (lista) => {
        if (lista != null) {
            let next = lista.prox
            lista.valor != null ?
                (lista = next) :
                deletePrimeiroValor(lista.prox)
        }
    }

    return {
        addPrimeiro: (valor) => addPrimeiro(valor),
        addNovoValorFinal: (ultimo, valor) => addNovoValorFinal(ultimo, valor),
        deletePrimeiroValor: (lista) => deletePrimeiroValor(lista),
    }
}

let fns = funcoes()
let fila = fns.addPrimeiro("PRIMEIRO")
let ultimo = fila

// fns.addNovoValorFinal(fila, "PRIMEIRO")
log(fila)

// ultimo = ultimo.prox

// log(fila)

fns.addNovoValorFinal(ultimo, "SEGUNDO")
ultimo = ultimo.prox
log(fila)

fns.addNovoValorFinal(ultimo, "TESTE")
ultimo = ultimo.prox
log(fila)

fns.deletePrimeiroValor(fila)
log(fila)

fns.addNovoValorFinal(ultimo, true)
ultimo = ultimo.prox
log(fila)

fns.deletePrimeiroValor(fila)
log(fila)

fns.addNovoValorFinal(ultimo, { teste: 10 })
ultimo = ultimo.prox
log(fila)

fns.deletePrimeiroValor(fila)
log(fila)

fns.deletePrimeiroValor(fila)
log(fila)

fns.deletePrimeiroValor(fila)
log(fila)

function log(obj) {
    console.log(JSON.stringify(obj), "\n")
}