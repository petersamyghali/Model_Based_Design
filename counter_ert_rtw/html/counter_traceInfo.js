function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "counter"};
	this.sidHashMap["counter"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<Root>/Add"] = {sid: "counter:3"};
	this.sidHashMap["counter:3"] = {rtwname: "<Root>/Add"};
	this.rtwnameHashMap["<Root>/Constant"] = {sid: "counter:6"};
	this.sidHashMap["counter:6"] = {rtwname: "<Root>/Constant"};
	this.rtwnameHashMap["<Root>/Constant1"] = {sid: "counter:10"};
	this.sidHashMap["counter:10"] = {rtwname: "<Root>/Constant1"};
	this.rtwnameHashMap["<Root>/Switch"] = {sid: "counter:8"};
	this.sidHashMap["counter:8"] = {rtwname: "<Root>/Switch"};
	this.rtwnameHashMap["<Root>/Unit Delay"] = {sid: "counter:4"};
	this.sidHashMap["counter:4"] = {rtwname: "<Root>/Unit Delay"};
	this.rtwnameHashMap["<Root>/Unit Delay1"] = {sid: "counter:11"};
	this.sidHashMap["counter:11"] = {rtwname: "<Root>/Unit Delay1"};
	this.rtwnameHashMap["<Root>/Output"] = {sid: "counter:12"};
	this.sidHashMap["counter:12"] = {rtwname: "<Root>/Output"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
