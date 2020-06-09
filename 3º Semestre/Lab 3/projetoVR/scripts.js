// counter to advance the assembly 
var counter = 0;

function start() {
    var button = document.getElementById("frente");
};

function count() { // counter "+" sum
    counter = parseInt(document.getElementById("count").textContent);
    counter++;
    document.getElementById("count").innerHTML = counter;
};

function countSub() { // counter "-" sub
    counter = parseInt(document.getElementById("count").textContent);
    counter--;
    document.getElementById("count").innerHTML = counter;
};

window.addEventListener("load", start, false);

//=============================================
// Button ">>" foward 
document.querySelector("#frente").addEventListener("click", (e) => {
        console.log("frente")
        count();

        if (counter == 1) {
            var el = document.querySelector("#peca2");
            el.setAttribute('animation', 'property: position; dur: 2000; from: 0.6 0 1; to: 0 0 0 ;loop: false;');
            el.object3D.visible = true;
        }
        //----------------------------------------------------------
        if (counter == 2) {
            var el = document.querySelector("#peca3");
            el.object3D.visible = true;
            el.setAttribute('animation', 'property: position; dur: 2000; from: 0.6 0 1; to: 0 0 0 ;loop: false;');
        }
        if (counter == 3) {
            var el = document.querySelector("#peca4");
            el.object3D.visible = true;
            el.setAttribute('animation', 'property: position; dur: 2000; from: 0.6 0 1; to: 0 0 0 ;loop: false;');
        }
        if (counter > 3) { // trava para o contador não ultrapassar o numero de peças existente 
            counter = parseInt(document.getElementById("count").textContent);
            counter = 3;
            document.getElementById("count").innerHTML = counter;
        }
    })
    //---------------------------------------------------------
    // Button "<<" backward
document.querySelector("#tras").addEventListener("click", (e) => {
    console.log("atras")

    countSub();

    if (counter == 0) {
        var el = document.querySelector("#peca2");
        el.object3D.visible = false;
        el.setAttribute('animation', 'property: position; dur: 2000; from: 0.6 0 1; to: 0.6 0 1;loop: false;');
    }
    //----------------------------------------------------------
    if (counter == 1) {
        var el = document.querySelector("#peca3");
        el.object3D.visible = false;
        el.setAttribute('animation', 'property: position; dur: 2000; from: 0.6 0 1; to: 0.6 0 1;loop: false;');
    }
    if (counter == 2) {
        var el = document.querySelector("#peca4");
        el.object3D.visible = false;
        el.setAttribute('animation', 'property: position; dur: 2000; from: 0.6 0 1; to: 0.6 0 1;loop: false;');
    }
    if (counter < 0) { // trava para o contador não ser menor que zero
        counter = parseInt(document.getElementById("count").textContent);
        counter = 0;
        document.getElementById("count").innerHTML = counter;
    }
})