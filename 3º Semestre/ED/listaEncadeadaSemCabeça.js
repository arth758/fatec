function linkedListWithoutHead() {
    const Node = (value, next = null) => {
        return {
            value: value,
            next: next,
        }
    }

    const addFirstNode = (value) => {
        return Node(value)
    }

    const addNewNodeFinal = (last, value) => {
        last.next = Node(value)
    }

    const addNodeFirstPos = (list, value) => {
        let auxNext = list.next,
            auxValue = list.value
        list.next = {
            value: auxValue,
            next: auxNext,
        }
        list.value = value
    }

    const printList = (list) => {
        if (list) {
            console.log(list.value)
            printList(list.next)
        }
    }

    return {
        addFirstNode: (value) => addFirstNode(value),
        addNodeFirstPos: (list, value) => addNodeFirstPos(list, value),
        addNewNodeFinal: (last, value) => addNewNodeFinal(last, value),
        printList: (list) => printList(list),
    }
}

let fns = linkedListWithoutHead()
let lista = null

lista = fns.addFirstNode(15)
log(lista)

let last = lista

fns.addNewNodeFinal(last, 62)
last = last.next
log(lista)

fns.addNewNodeFinal(last, 83)
last = last.next
log(lista)

fns.addNodeFirstPos(lista, 100)
log(lista)

fns.printList(lista)

function log(obj) {
    console.log(JSON.stringify(obj), "\n")
}