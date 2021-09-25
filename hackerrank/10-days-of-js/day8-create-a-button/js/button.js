let btn = document.getElementById("btn");

btn.onclick = function() {
    let num = Number(this.innerText);
    this.innerHTML = ++num;
}
