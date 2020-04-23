//BUDGET CONTROLLER
var budgetController=(function(){
	var Expends=function(id,description,value){
		this.id=id;
		this.description=description;
		this.value=value;
	}
	var Income=function(id,description,value){
		this.id=id;
		this.description=description;
		this.value=value;
	}
	var data={
		allItem:{
			exp:[],
			inc:[]
		},
		totals:{
			exp:[],
			inc:[]
		}
	}
	var allExpends=[];
	var allIncomes=[];
	var totalExpend=0;
	var totalIncome=0;
	return{
		addItem:function(type,description,value){
			var newItem,ID;
			if(data.allItem[type].length>0){
				ID = data.allItem[type][data.allItem[type].length-1].id+1;
			}else{
				ID=0;
			}
			if(type==='exp'){
				newItem = new Expends(ID,description,value);
			}else if(type==='inc'){
				newItem = new Income(ID,description,value);
			}
			data.allItem[type].push(newItem);
			return newItem;
		},
		test:function(){
			console.log(data);
		}
	}
})();

// [1 2 3 4 5] next 6
// [1 2 4 5 8] nextID 9
//ID = lastID + 1
//ID = data.allItem.exp[5] + 1;
//ID = data.allItem[type][data.allItem[type].length-1].id+1

//UI CONTROLLER
var UIController=(function(){
	var DOMstring={
		inputType:'.add__type',
		inputDescription:'.add__description',
		inputValue:'.add__value',
		inputBtn:'.add__btn'
	}
	return{
		getInput:function(){
			return{
				type:document.querySelector(DOMstring.inputType).value,
				description:document.querySelector(DOMstring.inputDescription).value,
				value:document.querySelector(DOMstring.inputValue).value
			}
		},
		getDOMstring:function(){
			return DOMstring;
		}
	}
})();
//APP CONTROLLER
var controller=(function(budgetCtrl,UICtrl){
	var setupEventListener=function(){
		var DOM=UICtrl.getDOMstring();
		document.querySelector(DOM.inputBtn).addEventListener('click',ctrlAdditem);
		document.addEventListener('keypress',function(event){
			if(event.keyCode===13){
				ctrlAdditem();
			}
		});
	}
	
	function ctrlAdditem(){
		var input,newItem;
		//1. Get the file input data
		var input=UICtrl.getInput();
		console.log(input);
		//2. Add the item to the budget controller
		newItem=budgetCtrl.addItem(input.type,input.description,input.value);
		//3. Add the item to the UI
		//4. Calculate the budget
		//5. Display the budget On the UI
		}
		return{
			init:function(){
				console.log('Application Start');
				setupEventListener();
			}
	}
	
	
})(budgetController,UIController);

controller.init();