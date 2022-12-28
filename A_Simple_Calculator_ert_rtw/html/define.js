function CodeDefine() { 
this.def = new Array();
this.def["rt_OneStep"] = {file: "ert_main_c.html",line:38,type:"fcn"};this.def["main"] = {file: "ert_main_c.html",line:75,type:"fcn"};this.def["A_Simple_Calculator_U"] = {file: "A_Simple_Calculator_c.html",line:25,type:"var"};this.def["A_Simple_Calculator_Y"] = {file: "A_Simple_Calculator_c.html",line:28,type:"var"};this.def["A_Simple_Calculator_M_"] = {file: "A_Simple_Calculator_c.html",line:31,type:"var"};this.def["A_Simple_Calculator_M"] = {file: "A_Simple_Calculator_c.html",line:32,type:"var"};this.def["A_Simple_Calculator_step"] = {file: "A_Simple_Calculator_c.html",line:36,type:"fcn"};this.def["A_Simple_Calculator_initialize"] = {file: "A_Simple_Calculator_c.html",line:75,type:"fcn"};this.def["A_Simple_Calculator_terminate"] = {file: "A_Simple_Calculator_c.html",line:91,type:"fcn"};this.def["ExtU_A_Simple_Calculator_T"] = {file: "A_Simple_Calculator_h.html",line:45,type:"type"};this.def["ExtY_A_Simple_Calculator_T"] = {file: "A_Simple_Calculator_h.html",line:53,type:"type"};this.def["RT_MODEL_A_Simple_Calculator_T"] = {file: "A_Simple_Calculator_types_h.html",line:25,type:"type"};this.def["int8_T"] = {file: "rtwtypes_h.html",line:52,type:"type"};this.def["uint8_T"] = {file: "rtwtypes_h.html",line:53,type:"type"};this.def["int16_T"] = {file: "rtwtypes_h.html",line:54,type:"type"};this.def["uint16_T"] = {file: "rtwtypes_h.html",line:55,type:"type"};this.def["int32_T"] = {file: "rtwtypes_h.html",line:56,type:"type"};this.def["uint32_T"] = {file: "rtwtypes_h.html",line:57,type:"type"};this.def["real32_T"] = {file: "rtwtypes_h.html",line:58,type:"type"};this.def["real64_T"] = {file: "rtwtypes_h.html",line:59,type:"type"};this.def["real_T"] = {file: "rtwtypes_h.html",line:65,type:"type"};this.def["time_T"] = {file: "rtwtypes_h.html",line:66,type:"type"};this.def["boolean_T"] = {file: "rtwtypes_h.html",line:67,type:"type"};this.def["int_T"] = {file: "rtwtypes_h.html",line:68,type:"type"};this.def["uint_T"] = {file: "rtwtypes_h.html",line:69,type:"type"};this.def["ulong_T"] = {file: "rtwtypes_h.html",line:70,type:"type"};this.def["char_T"] = {file: "rtwtypes_h.html",line:71,type:"type"};this.def["uchar_T"] = {file: "rtwtypes_h.html",line:72,type:"type"};this.def["byte_T"] = {file: "rtwtypes_h.html",line:73,type:"type"};this.def["creal32_T"] = {file: "rtwtypes_h.html",line:83,type:"type"};this.def["creal64_T"] = {file: "rtwtypes_h.html",line:88,type:"type"};this.def["creal_T"] = {file: "rtwtypes_h.html",line:93,type:"type"};this.def["cint8_T"] = {file: "rtwtypes_h.html",line:100,type:"type"};this.def["cuint8_T"] = {file: "rtwtypes_h.html",line:107,type:"type"};this.def["cint16_T"] = {file: "rtwtypes_h.html",line:114,type:"type"};this.def["cuint16_T"] = {file: "rtwtypes_h.html",line:121,type:"type"};this.def["cint32_T"] = {file: "rtwtypes_h.html",line:128,type:"type"};this.def["cuint32_T"] = {file: "rtwtypes_h.html",line:135,type:"type"};this.def["pointer_T"] = {file: "rtwtypes_h.html",line:153,type:"type"};}
CodeDefine.instance = new CodeDefine();
var testHarnessInfo = {OwnerFileName: "", HarnessOwner: "", HarnessName: "", IsTestHarness: "0"};
var relPathToBuildDir = "../ert_main.c";
var fileSep = "\\";
var isPC = true;
function Html2SrcLink() {
	this.html2SrcPath = new Array;
	this.html2Root = new Array;
	this.html2SrcPath["ert_main_c.html"] = "../ert_main.c";
	this.html2Root["ert_main_c.html"] = "ert_main_c.html";
	this.html2SrcPath["A_Simple_Calculator_c.html"] = "../A_Simple_Calculator.c";
	this.html2Root["A_Simple_Calculator_c.html"] = "A_Simple_Calculator_c.html";
	this.html2SrcPath["A_Simple_Calculator_h.html"] = "../A_Simple_Calculator.h";
	this.html2Root["A_Simple_Calculator_h.html"] = "A_Simple_Calculator_h.html";
	this.html2SrcPath["A_Simple_Calculator_private_h.html"] = "../A_Simple_Calculator_private.h";
	this.html2Root["A_Simple_Calculator_private_h.html"] = "A_Simple_Calculator_private_h.html";
	this.html2SrcPath["A_Simple_Calculator_types_h.html"] = "../A_Simple_Calculator_types.h";
	this.html2Root["A_Simple_Calculator_types_h.html"] = "A_Simple_Calculator_types_h.html";
	this.html2SrcPath["rtwtypes_h.html"] = "../rtwtypes.h";
	this.html2Root["rtwtypes_h.html"] = "rtwtypes_h.html";
	this.getLink2Src = function (htmlFileName) {
		 if (this.html2SrcPath[htmlFileName])
			 return this.html2SrcPath[htmlFileName];
		 else
			 return null;
	}
	this.getLinkFromRoot = function (htmlFileName) {
		 if (this.html2Root[htmlFileName])
			 return this.html2Root[htmlFileName];
		 else
			 return null;
	}
}
Html2SrcLink.instance = new Html2SrcLink();
var fileList = [
"ert_main_c.html","A_Simple_Calculator_c.html","A_Simple_Calculator_h.html","A_Simple_Calculator_private_h.html","A_Simple_Calculator_types_h.html","rtwtypes_h.html"];
