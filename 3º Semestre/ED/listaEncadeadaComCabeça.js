function linkedListWithHead() {
    const Node = (value, next = null) => {
        return {
            value: value,
            next: next
        }
    }

    const Head = (value) => {
        return {
            value: null,
            next: Node(value)
        }
    }

    const addFirstNode = (value) => {
        return Head(value)
    }

    const addNewNodeFinal = (last, value) => {
        last.next = Node(value)
    }

    const addNewNodeFirstPos = (list, value) => {
        let body = list.next
        list['next'] = Node(value, body)
    }

    const printList = (list) => {
        if (list) {
            if (list.value != null) console.log(list.value)
            printList(list.next)
        }
    }

    return {
        addFirstNode: (value) => addFirstNode(value),
        addNewNodeFinal: (last, value) => addNewNodeFinal(last, value),
        addNewNodeFirstPos: (list, value) => addNewNodeFirstPos(list, value),
        printList: (list) => printList(list)
    }
}

let fns = linkedListWithHead()
let lista = fns.addFirstNode(1)
let last = lista.next
let aux

fns.addNewNodeFinal(last, 2)
aux = last.next
log(lista)

fns.addNewNodeFinal(aux, 3)
last = aux.next
log(lista)

// lista.next = fns.addNewNodeFirstPos(lista, 0)
fns.addNewNodeFirstPos(lista, 0)
log(lista)

// console.log("Lista com cabeça:")
// console.log(JSON.stringify(lista))
// fns.printList(lista)

function log(obj) {
    console.log(JSON.stringify(obj), "\n")
}