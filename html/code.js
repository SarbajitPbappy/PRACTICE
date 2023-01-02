const numbers = document.querySelectorAll('.buttons');
const result = document.querySelector('result span');

let firstValue = "";
let isFirstValue = false;
let secondValue = "";
let isSecondValue = false;
let sign= "";
let resultValue = 0;
for(let i=0; i<numbers.length; i++) {
    numbers[i].addEventListener('click',(e)=> {
        let atr =e.target.getAttribute('value');
        if(isFirstValue==false){
                getFirstValue(atr)
        }
    })
}
function getFirstValue(el){
    result.innerHTML="";
    firstValue += el;
    result.innerHTML = firstValue;
    firstValue = +firstValue;
}