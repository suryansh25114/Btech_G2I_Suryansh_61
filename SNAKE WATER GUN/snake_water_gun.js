let userScore = 0;
let computerScore = 0;

const buttons = document.querySelectorAll(".button");
const msg = document.querySelector("#msg");
const userInitialScore = document.querySelector("#userInitialScore");
const computerInitialScore = document.querySelector("#computerInitialScore");

//getting computer choice
const getComputerChoice = () =>{
    const options = ["snake", "water", "gun"];
    const randomIdx = Math.floor(Math.random() *3);
    return options[randomIdx];
};

//when the userchoice and computerchoice are equal
const draw = () => {
    msg.innerText = "IT'S A DRAW ! PLAY AGAIN.";
    msg.style.backgroundColor = "white"
    msg.style.color = "black";
};

//showing winner
const showWinner = (userWin, userChoice, computerChoice) => {
    if(userWin){
        userScore++;
        userInitialScore.innerText = userScore;
        msg.innerText = `Your ${userChoice} Beats ${computerChoice}`;
        msg.style.backgroundColor = "green";
    }
    else{
        computerScore++;
        computerInitialScore.innerText = computerScore;
        msg.innerText = `${computerChoice} Beats Your ${userChoice}`;
        msg.style.backgroundColor = "red";
    }
};

// playing game
const playGame = (userChoice) => {
    const computerChoice = getComputerChoice();

    if(userChoice === computerChoice){
        draw();
    }
    else{
        let userWin = true;
        if(userChoice === "snake"){
            userWin = computerChoice === "gun" ? false : true;//water,gun
        }
        else if(userChoice === "water"){
            userWin = computerChoice === "snake" ? false : true;//snake,gun
        }
        else{
            userWin = computerChoice === "water" ? false : true;
        }
        showWinner(userWin, userChoice, computerChoice);
    }
};
buttons.forEach((button) => {
    button.addEventListener("click", () => {
        const userChoice = button.getAttribute("id");
        playGame(userChoice);
    });
});