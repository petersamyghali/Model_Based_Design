function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "Factorial_Using_Mat_"};
	this.sidHashMap["Factorial_Using_Mat_"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "Factorial_Using_Mat_:1"};
	this.sidHashMap["Factorial_Using_Mat_:1"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<Root>/Constant"] = {sid: "Factorial_Using_Mat_:2"};
	this.sidHashMap["Factorial_Using_Mat_:2"] = {rtwname: "<Root>/Constant"};
	this.rtwnameHashMap["<Root>/Display"] = {sid: "Factorial_Using_Mat_:3"};
	this.sidHashMap["Factorial_Using_Mat_:3"] = {rtwname: "<Root>/Display"};
	this.rtwnameHashMap["<Root>/MATLAB Function"] = {sid: "Factorial_Using_Mat_:1"};
	this.sidHashMap["Factorial_Using_Mat_:1"] = {rtwname: "<Root>/MATLAB Function"};
	this.rtwnameHashMap["<S1>:1"] = {sid: "Factorial_Using_Mat_:1:1"};
	this.sidHashMap["Factorial_Using_Mat_:1:1"] = {rtwname: "<S1>:1"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
