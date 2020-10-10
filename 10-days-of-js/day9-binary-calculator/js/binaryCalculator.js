document.getElementById("btn0").addEventListener("click", function () {
    document.getElementById("res").insertAdjacentHTML("beforeend", "0");
});

document.getElementById("btn1").addEventListener("click", function () {
    document.getElementById("res").insertAdjacentHTML("beforeend", "1");
});

function operatorAction(e) {
    var btn = e.target;
    document.getElementById("res").insertAdjacentHTML("beforeend", btn.innerHTML);
}

function getOperator(str) {
    if (str.includes("+")) {
        return "+";
    } else if (str.includes("-")) {
        return "-";
    } else if (str.includes("*")) {
        return "*";
    } else {
        return "/";
    }
}

document.getElementById("btnSum").onclick = operatorAction;
document.getElementById("btnMul").onclick = operatorAction;
document.getElementById("btnDiv").onclick = operatorAction;
document.getElementById("btnSub").onclick = operatorAction;

document.getElementById("btnEql").onclick = function() {
    let str = document.getElementById("res").textContent;
    let operator = getOperator(str);
    let operand1 = parseInt(str.slice(0, str.indexOf(operator)), 2);
    let operand2 = parseInt(str.slice(str.indexOf(operator) + 1), 2);
    let answer = eval(operand1 + operator + operand2);
    /* >>> is used for!? -> https://stackoverflow.com/questions/10382122/what-is-operator-in-js */
    answer = (answer >>> 0).toString(2);
    document.getElementById("res").innerHTML = answer;
};

document.getElementById("btnClr").onclick = function () {
    document.getElementById("res").innerHTML = "";
};
