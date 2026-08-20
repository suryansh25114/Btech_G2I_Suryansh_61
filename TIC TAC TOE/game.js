alert("THE GAME WILL START WITH O!");
let boxes = document.querySelectorAll(".box");
let hidden = document.querySelector(".hide");
let newBtn = document.querySelector("#new-btn");
let resetBtn = document.querySelector("#reset-btn");
let para = document.querySelector("p");
let playerO = true; //player1 and player2
let win = [
    [0,1,2],
    [0,3,6],
    [0,4,8],
    [1,4,7],
    [2,5,8],
    [2,4,6],
    [3,4,5],
    [6,7,8]
];

checkWinner = () => {
    for(let pattern of win){
        let position1 = boxes[pattern[0]].innerText;
        let position2 = boxes[pattern[1]].innerText;
        let position3 = boxes[pattern[2]].innerText;

        if(position1 != "" && position2 != "" && position3 != ""){
            if(position1 == position2 && position2 == position3){
                console.log("winner",position1);
                showWinner(position1);
            }
        }
    }
}

showWinner = (winingPlayer) => {
    para.innerText = `Congratulations , winner is ${winingPlayer}`;
    hidden.classList.remove("hide");
    disableBoxes();
}
boxes.forEach((box) => {
    box.addEventListener("click", () => {
        console.log("button was clicked");
        if(playerO){
            box.innerText = "O";
            playerO = false;
        }
        else{
            box.innerText = "X";
            playerO = true;
        }
        box.disabled = true;

        checkWinner();
    });
});

const disableBoxes = () => {
    for(let box of boxes){
        box.disabled = true;
    }
};

const enableBoxes = () => {
    for(let box of boxes){
        box.disabled = false;
        box.innerText = "";
    }
};

const resetGame = () => {
    playerO = true;
    enableBoxes();
    hidden.classList.add("hide");
};

newBtn.addEventListener("click",resetGame);
resetBtn.addEventListener("click",resetGame);