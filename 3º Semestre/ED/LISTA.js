function Node(list, value) {
    list.value = value
    list.next = null
}

function addFirstNode(list, value) {
    list = Node(list, value)
}

let lista


addFirstNode(lista, 1)
console.log(lista)