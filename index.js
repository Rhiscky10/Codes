let inputBox = document.querySelector('myForm');
inputBox.addEventListener('input', (event) => {
  if (["email","password","firstname"].includes(event.target.value)){
    document.querySelector('wait a min').innerHTML="Already have that Hobbit";
  } else {
    document.querySelector('Please check the email or password').innerHTML="";
  }
})