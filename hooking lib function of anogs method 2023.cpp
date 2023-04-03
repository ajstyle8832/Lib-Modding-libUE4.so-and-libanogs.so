function setvalue(address,flags,value) local tt={} tt[1]={} tt[1].address=address tt[1].flags=flags tt[1].value=value gg.setValues(tt) end
so=gg.getRangesList('libanogs.so')[1].start


function setvalue(address,flags,value) local tt={} tt[1]={} tt[1].address=address tt[1].flags=flags tt[1].value=value gg.setValues(tt) end
so=gg.getRangesList('libanogs.so')[1].start

setvalue(so + "0x44708", 4, "h 00 20 70 47")    // ano push block
setvalue(so + "0x461EC", 4, "h 00 20 70 47")   // dl %s, retval:%d, size:%d, cache:%d, jd   1st come bl block
setvalue(so + "0x4739C", 4, "h 00 20 70 47")   // memsafe push block
setvalue(so + "0x49C56", 4, "h 00 20 70 47")    // DataProxyImp 1st bl block
setvalue(so + "0x49C08", 4, "h 00 20 70 47")    // DataProxyImp  push block
setvalue(so + "0x4A610", 4, "h 00 20 70 47")   // game_ver:%s sdk_ver:%s


setvalue(so + "0x4AF72", 4, "h 00 20 70 47")   // rpdata2 1st bl block
setvalue(so + "0x4E27C", 4, "h 00 20 70 47")   // ano_cert_md5 push block


setvalue(so + "0x35018", 4, "h 00 20 70 47")   // ilc_close_pipe 1st bl block
setvalue(so + "0x35026", 4, "h 00 20 70 47") // ilc_recv_pipe 1st bl block
setvalue(so + "0x35032", 4, "h 00 20 70 47")  //  ilc_recv_pipe  2nd  BL              sub_298432
setvalue(so + "0x3503A", 4, "h 00 20 70 47")  // ilc_recv_pipe  3rd   BL              sub_268230


setvalue(so + "0x2B5CC8", 4, "h 00 20 70 47")  //  Pipe broke: handle %p, url = %s\n    bl blcok 1st
setvalue(so + "0x2BB9E4", 4, "h 00 20 70 47")  //  Site %s:%d is pipeline blacklisted\n   bl block 1st 

setvalue(so + "0x31B54", 4, "h 00 20 70 47")   // Closing connection %ld\n   push Closing connection %ld\n
 

setvalue(so + "0x2C8808", 4, "h 00 20 70 47")  // %s cookie %s=\"%s\" for domain %s, path  bl block 1st 
setvalue(so + "0x2C7C78", 4, "h 00 20 70 47")  //  #HttpOnly_ push block 

setvalue(so + "0x3497E", 4, "h 00 20 70 47")  //  case 22  BL   block sub_48092
setvalue(so + "0x34D08", 4, "h 00 20 70 47") //     case 26  BL   block  sub_26AC90


setvalue(so + "0x3AA318", 4, "h 00 F0 20 E3 1E FF 2F E1")


setvalue(so + "0x2069B8", 4, "h 00 F0 20 E3 1E FF 2F E1")   LDR   R1, [R1]  ; __imp_ptrace
setvalue(so + "0x22243C", 4, "h 00 F0 20 E3 1E FF 2F E1")    LDR   R0, [R0] ; __imp_ptrace

setvalue(so + "0x2069B0", 4, "h 00 F0 20 E3 1E FF 2F E1")  LDR R1, =(ptrace_ptr - 0x2069BA)





gg.toast("DONE✓")



gg.toast("DONE✓")



747947F4



Decimal	Hex	State	Name
7952	1F10	Ready	Binder:7814_3
7940	1F04	Ready	pool-17-thread-
7938	1F02	Ready	Thread-16
7936	1F00	Ready	ConnectivityMan
7935	1EFF	Ready	UnityChoreograp
7933	1EFD	Ready	pool-16-thread-
7926	1EF6	Ready	UnityPreload
7925	1EF5	Ready	UnityPreload
7924	1EF4	Ready	Thread-15
7913	1EE9	Ready	UnityGfxDeviceW
7911	1EE7	Ready	FMOD stream thr
7906	1EE2	Ready	AsyncReadManage
7905	1EE1	Ready	BatchDeleteObje
7904	1EE0	Ready	Background Job.
7903	1EDF	Ready	Thread-26
7902	1EDE	Ready	Background Job.
7901	1EDD	Ready	Background Job.
7900	1EDC	Ready	Background Job.
7899	1EDB	Ready	Background Job.
7898	1EDA	Ready	Background Job.
7897	1ED9	Ready	Background Job.
7896	1ED8	Ready	Background Job.
7895	1ED7	Ready	Background Job.
7894	1ED6	Ready	Background Job.
7893	1ED5	Ready	Background Job.
7892	1ED4	Ready	Background Job.
7891	1ED3	Ready	Background Job.
7890	1ED2	Ready	Background Job.
7889	1ED1	Ready	Background Job.
7888	1ED0	Ready	Job.Worker 2
7887	1ECF	Ready	Job.Worker 1
7886	1ECE	Ready	Job.Worker 0
7882	1ECA	Ready	OkHttp Connecti
7880	1EC8	Ready	hwuiTask1
7878	1EC6	Ready	ConnectivityThr
7877	1EC5	Ready	RenderThread
7875	1EC3	Ready	pool-15-thread-
7874	1EC2	Ready	pool-14-thread-
7873	1EC1	Ready	UnityMain
7866	1EBA	Ready	pool-13-thread-
7854	1EAE	Ready	MessengerIpcCli
7852	1EAC	Ready	pool-11-thread-
7851	1EAB	Ready	awaitEvenIfOnMa
7850	1EAA	Ready	GmsDynamite
7847	1EA7	Ready	lytics.startup1
7845	1EA5	Ready	Crashlytics Exc
7844	1EA4	Ready	ScionFrontendAp
7839	1E9F	Ready	Firebase-Messag
7837	1E9D	Ready	Firebase-Messag
7836	1E9C	Ready	pool-1-thread-1
7834	1E9A	Ready	Thread-3
7831	1E97	Ready	Profile Saver
7830	1E96	Ready	Binder:7814_2
7829	1E95	Ready	Binder:7814_1
7828	1E94	Ready	HeapTaskDaemon
7827	1E93	Ready	FinalizerWatchd
7826	1E92	Ready	FinalizerDaemon
7825	1E91	Ready	ReferenceQueueD
7824	1E90	Ready	dTi
7823	1E8F	Ready	.dts.freefiret
7821	1E8D	Ready	JDWP
7820	1E8C	Ready	Signal Catcher
7819	1E8B	Ready	Jit thread pool
7814	1E86	Ready	app_process32
8181	1FF5	Ready	Measurement Wor