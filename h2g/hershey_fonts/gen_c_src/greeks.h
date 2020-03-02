/* This file was generated with gen_C_code.m from fixed/greeks.jhf */

/* number of glyphs in font */
unsigned char greeks_cnt = 96;

/* Format: margin left, margin right, X, Y ... \0
< R> is pen-up, see original hershey font */
const char greeks [] PROGMEM="JZ\0"\
          "MWRFRT RRYQZR[SZRY\0"\
          "JZNFNM RVFVM\0"\
          "H]SBLb RYBRb RLOZO RKUYU\0"\
          "H\\PBP_ RTBT_ RYIWGTFPFMGKIKKLMMNOOUQWRXSYUYXWZT[P[MZKX\0"\
          "F^[FI[ RNFPHPJOLMMKMIKIIJGLFNFPGSHVHYG[F RWTUUTWTYV[X[ZZ[X[VYTWT\0"\
          "E_\\O\\N[MZMYNXPVUTXRZP[L[JZIYHWHUISJRQNRMSKSIRGPFNGMIMKNNPQUXWZY[[[\\Z\\Y\0"\
          "MWRHQGRFSGSIRKQL\0"\
          "KYVBTDRGPKOPOTPYR]T`Vb\0"\
          "KYNBPDRGTKUPUTTYR]P`Nb\0"\
          "JZRFRR RMIWO RWIMO\0"\
          "E_RIR[ RIR[R\0"\
          "MWSZR[QZRYSZS\\R^Q_\0"\
          "E_IR[R\0"\
          "MWRYQZR[SZRY\0"\
          "G][BIb\0"\
          "H\\QFNGLJKOKRLWNZQ[S[VZXWYRYOXJVGSFQF\0"\
          "H\\NJPISFS[\0"\
          "H\\LKLJMHNGPFTFVGWHXJXLWNUQK[Y[\0"\
          "H\\MFXFRNUNWOXPYSYUXXVZS[P[MZLYKW\0"\
          "H\\UFKTZT RUFU[\0"\
          "H\\WFMFLOMNPMSMVNXPYSYUXXVZS[P[MZLYKW\0"\
          "H\\XIWGTFRFOGMJLOLTMXOZR[S[VZXXYUYTXQVOSNRNOOMQLT\0"\
          "H\\YFO[ RKFYF\0"\
          "H\\PFMGLILKMMONSOVPXRYTYWXYWZT[P[MZLYKWKTLRNPQOUNWMXKXIWGTFPF\0"\
          "H\\XMWPURRSQSNRLPKMKLLINGQFRFUGWIXMXRWWUZR[P[MZLX\0"\
          "MWRMQNROSNRM RRYQZR[SZRY\0"\
          "MWRMQNROSNRM RSZR[QZRYSZS\\R^Q_\0"\
          "F^ZIJRZ[\0"\
          "E_IO[O RIU[U\0"\
          "F^JIZRJ[\0"\
          "I[LKLJMHNGPFTFVGWHXJXLWNVORQRT RRYQZR[SZRY\0"\
          "E`WNVLTKQKOLNMMPMSNUPVSVUUVS RQKOMNPNSOUPV RWKVSVUXVZV\\T]Q]O\\L[JYHWGTFQFNGLHJJILHOHRIUJWLYNZQ[T[WZYYZX RXKWSWUXV\0"\
          "I[RFJ[ RRFZ[ RMTWT\0"\
          "G\\KFK[ RKFTFWGXHYJYLXNWOTP RKPTPWQXRYTYWXYWZT[K[\0"\
          "HYLFL[ RLFXF\0"\
          "I[RFJ[ RRFZ[ RJ[Z[\0"\
          "H[LFL[ RLFYF RLPTP RL[Y[\0"\
          "H\\YFK[ RKFYF RK[Y[\0"\
          "G]KFK[ RYFY[ RKPYP\0"\
          "G]PFNGLIKKJNJSKVLXNZP[T[VZXXYVZSZNYKXIVGTFPF ROPUP\0"\
          "NVRFR[\0"\
          "G\\KFK[ RYFKT RPOY[\0"\
          "I[RFJ[ RRFZ[\0"\
          "F^JFJ[ RJFR[ RZFR[ RZFZ[\0"\
          "G]KFK[ RKFY[ RYFY[\0"\
          "I[KFYF ROPUP RK[Y[\0"\
          "G]PFNGLIKKJNJSKVLXNZP[T[VZXXYVZSZNYKXIVGTFPF\0"\
          "G]KFK[ RYFY[ RKFYF\0"\
          "G\\KFK[ RKFTFWGXHYJYMXOWPTQKQ\0"\
          "I[KFRPK[ RKFYF RK[Y[\0"\
          "JZRFR[ RKFYF\0"\
          "I[KKKILGMFOFPGQIRMR[ RYKYIXGWFUFTGSIRM\0"\
          "H\\RFR[ RPKMLLMKOKRLTMUPVTVWUXTYRYOXMWLTKPK\0"\
          "H\\KFY[ RK[YF\0"\
          "G]RFR[ RILJLKMLQMSNTQUSUVTWSXQYMZL[L\0"\
          "H\\K[O[LTKPKLLINGQFSFVGXIYLYPXTU[Y[\0"\
          "JZ\0"\
          "JZ\0"\
          "KYOBOb RPBPb ROBVB RObVb\0"\
          "KYKFY^\0"\
          "KYTBTb RUBUb RNBUB RNbUb\0"\
          "JZPLRITL RMORJWO RRJR[\0"\
          "JZJ]Z]\0"\
          "MWSFRGQIQKRLSKRJ\0"\
          "H]QMONMPLRKUKXLZN[P[RZUWWTYPZM RQMSMTNUPWXXZY[Z[\0"\
          "I\\UFSGQIOMNPMTLZKb RUFWFYHYKXMWNUORO RROTPVRWTWWVYUZS[Q[OZNYMV\0"\
          "I\\JPLNNMOMQNROSRSVR[ RZMYPXRR[P_Ob\0"\
          "I[TMQMONMPLSLVMYNZP[R[TZVXWUWRVOTMRKQIQGRFTFVGXI\0"\
          "JZWOVNTMQMONOPPRSS RSSOTMVMXNZP[S[UZWX\0"\
          "JYTFRGQHQIRJUKXK RXKTMQONRMUMWNYP[S]T_TaSbQbP`\0"\
          "H\\IQJOLMNMONOPNTL[ RNTPPRNTMVMXOXRWWTb\0"\
          "G\\HQIOKMMMNNNPMUMXNZO[Q[SZUWVUWRXMXJWGUFSFRHRJSMUPWRZT\0"\
          "LWRMPTOXOZP[R[TYUW\0"\
          "I[OMK[ RYNXMWMUNQROSNS RNSPTQUSZT[U[VZ\0"\
          "JZKFMFOGPHX[ RRML[\0"\
          "H]OMIb RNQMVMYO[Q[SZUXWT RYMWTVXVZW[Y[[Y\\W\0"\
          "I[LMOMNSMXL[ RYMXPWRUURXOZL[\0"\
          "JZTFRGQHQIRJUKXK RUKRLPMOOOQQSTTVT RTTPUNVMXMZO\\S^T_TaRbPb\0"\
          "J[RMPNNPMSMVNYOZQ[S[UZWXXUXRWOVNTMRM\0"\
          "G]PML[ RUMVSWXX[ RIPKNNM[M\0"\
          "I[MSMVNYOZQ[S[UZWXXUXRWOVNTMRMPNNPMSIb\0"\
          "I][MQMONMPLSLVMYNZP[R[TZVXWUWRVOUNSM\0"\
          "H\\SMP[ RJPLNOMZM\0"\
          "H\\IQJOLMNMONOPMVMYO[Q[TZVXXTYPYM\0"\
          "G]ONMOKQJTJWKYLZN[Q[TZWXYUZRZOXMVMTORSPXMb\0"\
          "I[KMMMOOU`WbYb RZMYOWRM]K`Jb\0"\
          "F]VFNb RGQHOJMLMMNMPLULXMZO[Q[TZVXXUZP[M\0"\
          "F]NMLNJQITIWJZK[M[OZQW RRSQWRZS[U[WZYWZTZQYNXM\0"\
          "JZ\0"\
          "JZ\0"\
          "KYTBRCQDPFPHQJRKSMSOQQ RRCQEQGRISJTLTNSPORSTTVTXSZR[Q]Q_Ra RQSSUSWRYQZP\\P^Q`RaTb\0"\
          "NVRBRb\0"\
          "KYPBRCSDTFTHSJRKQMQOSQ RRCSESGRIQJPLPNQPURQTPVPXQZR[S]S_Ra RSSQUQWRYSZT\\T^S`RaPb\0"\
          "F^IUISJPLONOPPTSVTXTZS[Q RISJQLPNPPQTTVUXUZT[Q[O\0"\
          "KYQFOGNINKOMQNSNUMVKVIUGSFQF\0"\
;
/* End of file gen_c_src/greeks.h */
