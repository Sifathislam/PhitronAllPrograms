function deposite_to_wallet(){
    // In here we get the input that customer give 
    let userInputAmount = document.getElementById("userInputAmount").value;
    if (userInputAmount == "") {
        userInputAmount = 0;
    }
    
    // In here we have the old amount fo the customer
    let oldAmount = document.getElementById("oldAmount").innerText;
    if (oldAmount == "") {
        oldAmount = 0;
    }
    
    // In here we will sum the old and new amount of the deposite 
    let sum = parseFloat(userInputAmount) + parseFloat(oldAmount);

    // In here we will update the amount of the deposite with new amount 
    document.getElementById("oldAmount").innerText = sum;
    document.getElementById("userInputAmount").value = ""

    // In here we will update the total update 
    let oldTotalAmount = document.getElementById("blance").innerText;
    
    let updatedValue = parseFloat(userInputAmount) + parseFloat(oldTotalAmount);
    document.getElementById("blance").innerText = updatedValue;

    
}

function withdraw_from_wallet(){
    // In here we store the amount that the user want withdraw
    let userInAmount = document.getElementById("user_input_withdraw").value;
    if (userInAmount == "") {
        userInAmount = 0;
    }
    
    // In here we get the old amount of the withdraw 
    let oldAmount = document.getElementById("oldAmount2").innerText;
    if (oldAmount == "") {
        oldAmount = 0;
    }
    
    // In here we will update the old amont of the withdraw 
    let sum = parseFloat(userInAmount) + parseFloat(oldAmount);

    // In here we will update the total update 
    let oldTotalAmount = document.getElementById("blance").innerText;
    if(oldTotalAmount == "100" || parseFloat(userInAmount) > parseFloat(oldTotalAmount)){
        alert("You can't withdraw money because you don't enough money");
        return;
    }
    let updatedValue = Math.abs(parseFloat(userInAmount) - parseFloat(oldTotalAmount));
    document.getElementById("blance").innerText = updatedValue;

    // In here we will update the amont of the withdraw of the text 
    document.getElementById("oldAmount2").innerText = sum;
    document.getElementById("user_input_withdraw").value=""
}