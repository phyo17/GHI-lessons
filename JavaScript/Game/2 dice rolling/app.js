/*
GAME RULES:

- The game has 2 players, playing in rounds
- In each turn, a player rolls a dice as many times as he whishes. Each result get added to his ROUND score
- BUT, if the player rolls a 1, all his ROUND score gets lost. After that, it's the next player's turn
- The player can choose to 'Hold', which means that his ROUND score gets added to his GLBAL score. After that, it's the next player's turn
- The first player to reach 100 points on GLOBAL score wins the game

*/

var scores,roundScore,activePlayer,gamePlaying,highScores;
init();
// var score0=0;
// var score1=0;
// console.log(document.getElementsByTagName('button'));
// console.log(document.getElementById('roll'));
// console.log(document.getElementsByClassName('btn-roll'));
// console.log(document.getElementsByClassName('hello'));

// console.log(document.querySelector('button'));
// console.log(document.querySelectorAll('button'));
// console.log(document.querySelector('#button'));
// console.log(document.querySelector('.btn-roll'));
// console.log(document.querySelector('.hello'));


document.querySelector('.btn-roll').addEventListener('click',function(){ 
	if(gamePlaying){
		// alert(Math.floor(Math.random()*6)+1);
		var dice0=Math.floor(Math.random()*6)+1;
		var dice1=Math.floor(Math.random()*6)+1;
		var diceDOM0=document.querySelector('.dice0');
		var diceDOM1=document.querySelector('.dice1');
		diceDOM0.src="dice-"+dice0+".png";
		diceDOM1.src="dice-"+dice1+".png";
		diceDOM0.style.display="block";
		diceDOM1.style.display="block";
		if(dice0!=6 && dice1!=6){
			roundScore+=dice0;
			roundScore+=dice1;
			document.querySelector('#current-'+activePlayer).textContent=roundScore;
		}else{
			nextplayer();
		}
	}
});
function nextplayer(){
	document.querySelector('.player-0-panel').classList.toggle('active');
	document.querySelector('.player-1-panel').classList.toggle('active');
	document.querySelector('.dice0').style.display="none";
	document.querySelector('.dice1').style.display="none";
	activePlayer == 0 ? activePlayer = 1 : activePlayer = 0;
	roundScore=0;
	document.querySelector('#current-0').textContent=0;
	document.querySelector('#current-1').textContent=0;

}

document.querySelector('.btn-hold').addEventListener('click',function(){
	if(gamePlaying){
		scores[activePlayer]+=roundScore;
		document.querySelector('#score-'+activePlayer).textContent=scores[activePlayer];
		if(document.querySelector('.highScores').value){
			highScores=document.querySelector('.highScores').value;
		}
		else{
			highScores=100;
		}
		if(scores[activePlayer]>=highScores){
			gamePlaying=false;
			document.querySelector('#name-'+activePlayer).textContent='WINNER !';
			document.querySelector('.player-'+activePlayer+'-panel').classList.remove('active');
			document.querySelector('.player-'+activePlayer+'-panel').classList.add('winner');
		}else{
			nextplayer();
		}
	}
})
function init(){
	scores=[0,0];
	roundScore=0;
	activePlayer=0;
	gamePlaying=true;
	document.querySelector('.dice0').style.display="none";
	document.querySelector('.dice1').style.display="none";
	document.querySelector('.player-0-panel').classList.remove('winner');
	document.querySelector('.player-1-panel').classList.remove('winner');
	document.querySelector('.player-0-panel').classList.add('active');
	document.querySelector('#name-0').textContent='PLAYER 1';
	document.querySelector('#name-1').textContent='PLAYER 2';
	document.querySelector('#score-0').textContent=0;
	document.querySelector('#score-1').textContent=0;
	document.querySelector('#current-0').textContent=0;
	document.querySelector('#current-1').textContent=0;
}
document.querySelector('.btn-new').addEventListener('click',init);
