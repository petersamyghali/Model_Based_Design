function TraceInfoFlag() {
    this.traceFlag = new Array();
    this.traceFlag["A_Simple_Calculator.c:44c59"]=1;
    this.traceFlag["A_Simple_Calculator.c:52c59"]=1;
    this.traceFlag["A_Simple_Calculator.c:60c59"]=1;
    this.traceFlag["A_Simple_Calculator.c:68c59"]=1;
}
top.TraceInfoFlag.instance = new TraceInfoFlag();
function TraceInfoLineFlag() {
    this.lineTraceFlag = new Array();
    this.lineTraceFlag["A_Simple_Calculator.c:44"]=1;
    this.lineTraceFlag["A_Simple_Calculator.c:45"]=1;
    this.lineTraceFlag["A_Simple_Calculator.c:52"]=1;
    this.lineTraceFlag["A_Simple_Calculator.c:53"]=1;
    this.lineTraceFlag["A_Simple_Calculator.c:60"]=1;
    this.lineTraceFlag["A_Simple_Calculator.c:61"]=1;
    this.lineTraceFlag["A_Simple_Calculator.c:68"]=1;
    this.lineTraceFlag["A_Simple_Calculator.c:69"]=1;
}
top.TraceInfoLineFlag.instance = new TraceInfoLineFlag();
