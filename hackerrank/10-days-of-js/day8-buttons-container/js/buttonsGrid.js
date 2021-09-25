let rotator = {
    ids: ["btn1", "btn2", "btn3", "btn6", "btn9", "btn8", "btn7", "btn4"],
    vals: [1, 2, 3, 6, 9, 8, 7, 4],
    rotate: function() {
        this.vals.unshift(this.vals.pop());
        for (let i = 0; i < this.ids.length; i++) {
            document.getElementById(this.ids[i]).innerText = this.vals[i];
        }
    }
};
