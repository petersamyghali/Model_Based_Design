function CodeDefine() { 
this.def = new Array();
this.def["rt_OneStep"] = {file: "ert_main_c.html",line:38,type:"fcn"};this.def["main"] = {file: "ert_main_c.html",line:75,type:"fcn"};this.def["Struct_U"] = {file: "Struct_c.html",line:25,type:"var"};this.def["Struct_Y"] = {file: "Struct_c.html",line:28,type:"var"};this.def["Struct_M_"] = {file: "Struct_c.html",line:31,type:"var"};this.def["Struct_M"] = {file: "Struct_c.html",line:32,type:"var"};this.def["Struct_rtZFault_t"] = {file: "Struct_c.html",line:33,type:"var"};this.def["Struct_step"] = {file: "Struct_c.html",line:39,type:"fcn"};this.def["Struct_initialize"] = {file: "Struct_c.html",line:58,type:"fcn"};this.def["Struct_terminate"] = {file: "Struct_c.html",line:74,type:"fcn"};this.def["ExtU_Struct_T"] = {file: "Struct_h.html",line:44,type:"type"};this.def["ExtY_Struct_T"] = {file: "Struct_h.html",line:51,type:"type"};this.def["Fault_t"] = {file: "Struct_types_h.html",line:31,type:"type"};this.def["RT_MODEL_Struct_T"] = {file: "Struct_types_h.html",line:36,type:"type"};this.def["int8_T"] = {file: "rtwtypes_h.html",line:52,type:"type"};this.def["uint8_T"] = {file: "rtwtypes_h.html",line:53,type:"type"};this.def["int16_T"] = {file: "rtwtypes_h.html",line:54,type:"type"};this.def["uint16_T"] = {file: "rtwtypes_h.html",line:55,type:"type"};this.def["int32_T"] = {file: "rtwtypes_h.html",line:56,type:"type"};this.def["uint32_T"] = {file: "rtwtypes_h.html",line:57,type:"type"};this.def["real32_T"] = {file: "rtwtypes_h.html",line:58,type:"type"};this.def["real64_T"] = {file: "rtwtypes_h.html",line:59,type:"type"};this.def["real_T"] = {file: "rtwtypes_h.html",line:65,type:"type"};this.def["time_T"] = {file: "rtwtypes_h.html",line:66,type:"type"};this.def["boolean_T"] = {file: "rtwtypes_h.html",line:67,type:"type"};this.def["int_T"] = {file: "rtwtypes_h.html",line:68,type:"type"};this.def["uint_T"] = {file: "rtwtypes_h.html",line:69,type:"type"};this.def["ulong_T"] = {file: "rtwtypes_h.html",line:70,type:"type"};this.def["char_T"] = {file: "rtwtypes_h.html",line:71,type:"type"};this.def["uchar_T"] = {file: "rtwtypes_h.html",line:72,type:"type"};this.def["byte_T"] = {file: "rtwtypes_h.html",line:73,type:"type"};this.def["creal32_T"] = {file: "rtwtypes_h.html",line:83,type:"type"};this.def["creal64_T"] = {file: "rtwtypes_h.html",line:88,type:"type"};this.def["creal_T"] = {file: "rtwtypes_h.html",line:93,type:"type"};this.def["cint8_T"] = {file: "rtwtypes_h.html",line:100,type:"type"};this.def["cuint8_T"] = {file: "rtwtypes_h.html",line:107,type:"type"};this.def["cint16_T"] = {file: "rtwtypes_h.html",line:114,type:"type"};this.def["cuint16_T"] = {file: "rtwtypes_h.html",line:121,type:"type"};this.def["cint32_T"] = {file: "rtwtypes_h.html",line:128,type:"type"};this.def["cuint32_T"] = {file: "rtwtypes_h.html",line:135,type:"type"};this.def["pointer_T"] = {file: "rtwtypes_h.html",line:153,type:"type"};}
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
	this.html2SrcPath["Struct_c.html"] = "../Struct.c";
	this.html2Root["Struct_c.html"] = "Struct_c.html";
	this.html2SrcPath["Struct_h.html"] = "../Struct.h";
	this.html2Root["Struct_h.html"] = "Struct_h.html";
	this.html2SrcPath["Struct_private_h.html"] = "../Struct_private.h";
	this.html2Root["Struct_private_h.html"] = "Struct_private_h.html";
	this.html2SrcPath["Struct_types_h.html"] = "../Struct_types.h";
	this.html2Root["Struct_types_h.html"] = "Struct_types_h.html";
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
"ert_main_c.html","Struct_c.html","Struct_h.html","Struct_private_h.html","Struct_types_h.html","rtwtypes_h.html"];
