let randomNumber = Math.floor(Math.random() * 100) + 1;

function checkGuess() {
    let guess = parseInt(document.getElementById("guess").value);
    let result = document.getElementById("result");

    if (guess < randomNumber)
        result.innerText = "Too Low ⬇️";
    else if (guess > randomNumber)
        result.innerText = "Too High ⬆️";
    else {
        result.innerText = "Correct! 🎉";
        randomNumber = Math.floor(Math.random() * 100) + 1;
        document.getElementById("guess").value = "";
    }
}
