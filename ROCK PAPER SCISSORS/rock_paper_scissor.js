let userScore = 0;
let computerScore = 0;

const options = document.querySelectorAll(".select");
const msg = document.querySelector("#msg");
const userScorePara = document.querySelector("#user-choice");
const computerScorePara = document.querySelector("#computer-choice");

const genComputerChoice = () => {
    const other = ["rock","paper","scissor"];
    const randomIdx = Math.floor(Math.random()*3);
    return other[randomIdx];
};

const draw = () => {
    msg.innerText = "IT'S A DRAW ! PLAY AGAIN";
    msg.style.backgroundColor = "yellow";
};

const showWinner = (userWin, userChoice, computerChoice) => {
    if(userWin){
        userScore++;
        userScorePara.innerText = userScore;
        msg.innerText = `You Win ! Your ${userChoice} beats ${computerChoice}`;
        msg.style.backgroundColor = "green";
    }
    else{
        computerScore++;
        computerScorePara.innerText = computerScore;
        msg.innerText = `You Lose ! ${computerChoice} beats your ${userChoice}`;
        msg.style.backgroundColor = "red";
    }
};
const playGame = (userChoice) => {
    const computerChoice = genComputerChoice();

    if(userChoice === computerChoice){
        draw();
    }
    else{
        let userWin = true;
        if(userChoice === "rock"){
            userWin = computerChoice === "paper" ? false : true;//paper,scissor
        }
        else if(userChoice === "paper"){
            userWin = computerChoice === "scissor" ? false : true;//rock,scissor
        }
        else{
            userWin = computerChoice === "rock" ? false : true; //ROCK,PAPER
        }
        showWinner(userWin, userChoice, computerChoice);
    }
};
options.forEach((option) => {
    option.addEventListener("click" , () => {
        const userChoice = option.getAttribute("id");
        playGame(userChoice);
    });
});