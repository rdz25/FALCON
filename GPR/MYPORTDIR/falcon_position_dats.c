/*
**
** The C code is generated by ATS/Postiats
** The compilation time is: 2014-4-17: 16h:22m
**
*/

/*
** include runtime header files
*/
#ifndef _ATS_CCOMP_HEADER_NONE
#include "pats_ccomp_config.h"
#include "pats_ccomp_basics.h"
#include "pats_ccomp_typedefs.h"
#include "pats_ccomp_instrset.h"
#include "pats_ccomp_memalloc.h"
#ifndef _ATS_CCOMP_EXCEPTION_NONE
#include "pats_ccomp_memalloca.h"
#include "pats_ccomp_exception.h"
#endif // end of [_ATS_CCOMP_EXCEPTION_NONE]
#endif /* _ATS_CCOMP_HEADER_NONE */


/*
** include prelude cats files
*/
#ifndef _ATS_CCOMP_PRELUDE_NONE
//
#include "prelude/CATS/basics.cats"
#include "prelude/CATS/integer.cats"
#include "prelude/CATS/pointer.cats"
#include "prelude/CATS/bool.cats"
#include "prelude/CATS/char.cats"
#include "prelude/CATS/integer_ptr.cats"
#include "prelude/CATS/integer_fixed.cats"
#include "prelude/CATS/float.cats"
#include "prelude/CATS/memory.cats"
#include "prelude/CATS/string.cats"
#include "prelude/CATS/strptr.cats"
//
#include "prelude/CATS/filebas.cats"
//
#include "prelude/CATS/list.cats"
#include "prelude/CATS/option.cats"
#include "prelude/CATS/array.cats"
#include "prelude/CATS/arrayptr.cats"
#include "prelude/CATS/arrayref.cats"
#include "prelude/CATS/matrix.cats"
#include "prelude/CATS/matrixptr.cats"
//
#endif /* _ATS_CCOMP_PRELUDE_NONE */
/*
** for user-supplied prelude
*/
#ifdef _ATS_CCOMP_PRELUDE_USER
//
#include _ATS_CCOMP_PRELUDE_USER
//
#endif /* _ATS_CCOMP_PRELUDE_USER */

/*
staload-prologues(beg)
*/
/*
/home/brand_000/ATS-Postiats/prelude/DATS/pointer.dats: 1533(line=44, offs=1) -- 1572(line=44, offs=40)
*/
/*
/home/brand_000/ATS-Postiats/prelude/DATS/integer.dats: 1636(line=51, offs=1) -- 1675(line=51, offs=40)
*/
/*
/home/brand_000/ATS-Postiats/prelude/DATS/integer_fixed.dats: 1641(line=51, offs=1) -- 1680(line=51, offs=40)
*/
/*
/home/brand_000/ATS-Postiats/prelude/DATS/memory.dats: 1410(line=38, offs=1) -- 1449(line=39, offs=32)
*/
/*
/home/brand_000/ATS-Postiats/prelude/DATS/string.dats: 1609(line=48, offs=1) -- 1648(line=48, offs=40)
*/
/*
/home/brand_000/ATS-Postiats/prelude/DATS/strptr.dats: 1609(line=48, offs=1) -- 1648(line=48, offs=40)
*/
/*
/home/brand_000/ATS-Postiats/prelude/DATS/strptr.dats: 1671(line=52, offs=1) -- 1718(line=52, offs=48)
*/
/*
/home/brand_000/ATS-Postiats/prelude/DATS/integer.dats: 1636(line=51, offs=1) -- 1675(line=51, offs=40)
*/
/*
/home/brand_000/ATS-Postiats/prelude/DATS/filebas.dats: 1613(line=48, offs=1) -- 1652(line=48, offs=40)
*/
/*
/home/brand_000/ATS-Postiats/prelude/DATS/filebas.dats: 1675(line=52, offs=1) -- 1722(line=52, offs=48)
*/
/*
/home/brand_000/ATS-Postiats/prelude/DATS/integer.dats: 1636(line=51, offs=1) -- 1675(line=51, offs=40)
*/
/*
/home/brand_000/ATS-Postiats/prelude/DATS/filebas.dats: 1745(line=56, offs=1) -- 1783(line=56, offs=39)
*/
/*
/home/brand_000/ATS-Postiats/libc/SATS/stdio.sats: 1380(line=35, offs=1) -- 1418(line=37, offs=3)
*/

#include "libc/CATS/stdio.cats"
/*
/home/brand_000/ATS-Postiats/libc/SATS/stdio.sats: 1855(line=57, offs=1) -- 1897(line=59, offs=27)
*/
/*
/home/brand_000/ATS-Postiats/libc/sys/SATS/types.sats: 1390(line=36, offs=1) -- 1432(line=38, offs=3)
*/

#include "libc/sys/CATS/types.cats"
/*
/home/brand_000/ATS-Postiats/prelude/DATS/filebas.dats: 1839(line=58, offs=1) -- 1879(line=58, offs=41)
*/
/*
/home/brand_000/ATS-Postiats/libc/SATS/string.sats: 1380(line=35, offs=1) -- 1419(line=37, offs=3)
*/

#include "libc/CATS/string.cats"
/*
/home/brand_000/ATS-Postiats/prelude/DATS/filebas.dats: 13966(line=737, offs=1) -- 13996(line=737, offs=31)
*/
/*
/home/brand_000/ATS-Postiats/libc/SATS/stdio.sats: 1380(line=35, offs=1) -- 1418(line=37, offs=3)
*/

#include "libc/CATS/stdio.cats"
/*
/home/brand_000/ATS-Postiats/libc/SATS/stdio.sats: 1855(line=57, offs=1) -- 1897(line=59, offs=27)
*/
/*
/home/brand_000/ATS-Postiats/libc/sys/SATS/types.sats: 1390(line=36, offs=1) -- 1432(line=38, offs=3)
*/

#include "libc/sys/CATS/types.cats"
/*
/home/brand_000/ATS-Postiats/prelude/DATS/list.dats: 1527(line=44, offs=1) -- 1566(line=44, offs=40)
*/
/*
/home/brand_000/ATS-Postiats/prelude/DATS/list.dats: 1567(line=45, offs=1) -- 1613(line=45, offs=47)
*/
/*
/home/brand_000/ATS-Postiats/prelude/DATS/unsafe.dats: 1532(line=44, offs=1) -- 1566(line=44, offs=35)
*/
/*
/home/brand_000/ATS-Postiats/prelude/DATS/list_vt.dats: 1536(line=44, offs=1) -- 1575(line=44, offs=40)
*/
/*
/home/brand_000/ATS-Postiats/prelude/DATS/list_vt_mergesort.dats: 1546(line=44, offs=1) -- 1585(line=44, offs=40)
*/
/*
/home/brand_000/ATS-Postiats/prelude/DATS/list_vt_quicksort.dats: 1546(line=44, offs=1) -- 1585(line=44, offs=40)
*/
/*
/home/brand_000/ATS-Postiats/prelude/DATS/array.dats: 1534(line=44, offs=1) -- 1573(line=44, offs=40)
*/
/*
/home/brand_000/ATS-Postiats/prelude/DATS/array.dats: 1574(line=45, offs=1) -- 1616(line=45, offs=43)
*/
/*
/home/brand_000/ATS-Postiats/prelude/DATS/array_bsearch.dats: 1531(line=44, offs=1) -- 1570(line=44, offs=40)
*/
/*
/home/brand_000/ATS-Postiats/prelude/DATS/array_quicksort.dats: 1531(line=44, offs=1) -- 1570(line=44, offs=40)
*/
/*
/home/brand_000/ATS-Postiats/prelude/DATS/arrayptr.dats: 1532(line=44, offs=1) -- 1571(line=44, offs=40)
*/
/*
/home/brand_000/ATS-Postiats/prelude/DATS/arrayref.dats: 1532(line=44, offs=1) -- 1571(line=44, offs=40)
*/
/*
/home/brand_000/ATS-Postiats/prelude/DATS/matrix.dats: 1535(line=44, offs=1) -- 1574(line=44, offs=40)
*/
/*
/home/brand_000/ATS-Postiats/prelude/DATS/matrixptr.dats: 1538(line=44, offs=1) -- 1577(line=44, offs=40)
*/
/*
/home/brand_000/ATS-Postiats/prelude/DATS/matrixref.dats: 1538(line=44, offs=1) -- 1577(line=44, offs=40)
*/
/*
/home/brand_000/ATS-Postiats/prelude/DATS/stream.dats: 1564(line=46, offs=1) -- 1603(line=46, offs=40)
*/
/*
/home/brand_000/ATS-Postiats/prelude/DATS/stream_vt.dats: 1567(line=46, offs=1) -- 1606(line=46, offs=40)
*/
/*
/home/brand_000/ATS-Postiats/prelude/DATS/unsafe.dats: 1532(line=44, offs=1) -- 1566(line=44, offs=35)
*/
/*
/home/brand_000/ATS-Postiats/prelude/DATS/checkast.dats: 1531(line=44, offs=1) -- 1570(line=45, offs=32)
*/
/*
staload-prologues(end)
*/
/*
typedefs-for-tyrecs-and-tysums(beg)
*/
typedef
struct {
atstkind_t0ype(atstype_int) atslab__pos_ntot; 
atstkind_t0ype(atstype_int) atslab__pos_nrow; 
atstkind_t0ype(atstype_int) atslab__pos_ncol; 
} postiats_tyrec_0 ;
typedef
struct {
#if(0)
int contag ;
#endif
atstkind_t0ype(atstype_int) atslab__0; 
atstkind_t0ype(atstype_int) atslab__1; 
atstkind_t0ype(atstype_int) atslab__2; 
} postiats_tysum_1 ;
/*
typedefs-for-tyrecs-and-tysums(end)
*/
/*
dynconlst-declaration(beg)
*/
/*
dynconlst-declaration(end)
*/
/*
dyncstlst-declaration(beg)
*/
ATSdyncst_extfun(_057_cygdrive_057_c_057_cygwin_057_home_057_brand_000_057_FBA_057_FALCON_057_GPR_057_falcon_056_sats__fprint_position, (atstkind_type(atstype_ptrk), atstype_boxed), atsvoid_t0ype) ;
ATSdyncst_mac(atspre_FILE_stdout)
ATSdyncst_mac(atspre_fprint_int)
ATSdyncst_mac(atspre_fprint_string)
ATSdyncst_mac(atspre_g0int2int_int_int)
ATSdyncst_mac(atspre_g0int_gte_int)
ATSdyncst_mac(atspre_g0int_add_int)
ATSdyncst_mac(atspre_eq_char0_char0)
ATSdyncst_mac(atspre_int2char0)
/*
dyncstlst-declaration(end)
*/
/*
dynvalist-implementation(beg)
*/
/*
dynvalist-implementation(end)
*/
/*
exnconlst-declaration(beg)
*/
#ifndef _ATS_CCOMP_EXCEPTION_NONE
extern void the_atsexncon_initize (atstype_exncon *d2c, char *exnmsg) ;
#endif // end of [_ATS_CCOMP_EXCEPTION_NONE]
/*
exnconlst-declaration(end)
*/
/*
assumelst-declaration(beg)
*/
/*
/cygdrive/c/cygwin/home/brand_000/FBA/FALCON/GPR/falcon_position.dats: 273(line=23, offs=1) -- 304(line=23, offs=32)
*/
ATSassume(_057_cygdrive_057_c_057_cygwin_057_home_057_brand_000_057_FBA_057_FALCON_057_GPR_057_falcon_056_sats__position_type) ;
/*
assumelst-declaration(end)
*/
/*
extypelst-declaration(beg)
*/
/*
extypelst-declaration(end)
*/
ATSstatmpdec(statmpref0, postiats_tyrec_0) ;
#if(0)
ATSglobaldec()
atstype_boxed
_057_cygdrive_057_c_057_cygwin_057_home_057_brand_000_057_FBA_057_FALCON_057_GPR_057_falcon_056_sats__position_get_now() ;
#endif // end of [QUALIFIED]

#if(0)
ATSglobaldec()
atsvoid_t0ype
_057_cygdrive_057_c_057_cygwin_057_home_057_brand_000_057_FBA_057_FALCON_057_GPR_057_falcon_056_sats__print_position(atstype_boxed) ;
#endif // end of [QUALIFIED]

#if(0)
ATSglobaldec()
atsvoid_t0ype
_057_cygdrive_057_c_057_cygwin_057_home_057_brand_000_057_FBA_057_FALCON_057_GPR_057_falcon_056_sats__fprint_position(atstkind_type(atstype_ptrk), atstype_boxed) ;
#endif // end of [QUALIFIED]

#if(0)
ATSglobaldec()
atsvoid_t0ype
_057_cygdrive_057_c_057_cygwin_057_home_057_brand_000_057_FBA_057_FALCON_057_GPR_057_falcon_position_056_dats__the_position_incby1(atstkind_t0ype(atstype_int)) ;
#endif // end of [QUALIFIED]

#if(0)
#if(0)
ATSglobaldec()
atstkind_t0ype(atstype_bool)
ATSLIB_056_prelude__gte_g0int_int__4(atstkind_t0ype(atstyvar_type(tk)), atstkind_t0ype(atstype_int)) ;
#endif // end of [QUALIFIED]
#endif // end of [TEMPLATE]

ATSstaticdec()
atstkind_t0ype(atstype_bool)
ATSLIB_056_prelude__gte_g0int_int__4__1(atstkind_t0ype(atstype_int), atstkind_t0ype(atstype_int)) ;

#if(0)
ATSglobaldec()
atsvoid_t0ype
_057_cygdrive_057_c_057_cygwin_057_home_057_brand_000_057_FBA_057_FALCON_057_GPR_057_falcon_056_sats__fprint_the_position(atstkind_type(atstype_ptrk)) ;
#endif // end of [QUALIFIED]

/*
/cygdrive/c/cygwin/home/brand_000/FBA/FALCON/GPR/falcon_position.dats: 755(line=55, offs=18) -- 822(line=58, offs=2)
*/
/*
local: 
global: position_get_now$0$0(level=0)
local: 
global: 
*/
ATSglobaldec()
atstype_boxed
_057_cygdrive_057_c_057_cygwin_057_home_057_brand_000_057_FBA_057_FALCON_057_GPR_057_falcon_056_sats__position_get_now()
{
/* tmpvardeclst(beg) */
ATStmpdec(tmpret1, atstype_boxed) ;
/* tmpvardeclst(end) */
/* funbodyinstrlst(beg) */
/*
emit_instr: loc0 = /cygdrive/c/cygwin/home/brand_000/FBA/FALCON/GPR/falcon_position.dats: 738(line=55, offs=1) -- 822(line=58, offs=2)
*/
__patsflab_position_get_now:
/*
emit_instr: loc0 = /cygdrive/c/cygwin/home/brand_000/FBA/FALCON/GPR/falcon_position.dats: 760(line=55, offs=23) -- 822(line=58, offs=2)
*/

ATSINSmove_con1(tmpret1, postiats_tysum_1) ;
#if(0)
ATSINSstore_con_tag(tmpret1, 0) ;
#endif
ATSINSstore_con_ofs(tmpret1, postiats_tysum_1, atslab__0, ATSSELfltrec(ATSderef(ATSPMVcastfn(ref_make_viewptr, atstkind_type(atstype_ptrk), ATSPMVptrof(statmpref0)), postiats_tyrec_0), postiats_tyrec_0, atslab__pos_ntot)) ;
ATSINSstore_con_ofs(tmpret1, postiats_tysum_1, atslab__1, ATSSELfltrec(ATSderef(ATSPMVcastfn(ref_make_viewptr, atstkind_type(atstype_ptrk), ATSPMVptrof(statmpref0)), postiats_tyrec_0), postiats_tyrec_0, atslab__pos_nrow)) ;
ATSINSstore_con_ofs(tmpret1, postiats_tysum_1, atslab__2, ATSSELfltrec(ATSderef(ATSPMVcastfn(ref_make_viewptr, atstkind_type(atstype_ptrk), ATSPMVptrof(statmpref0)), postiats_tyrec_0), postiats_tyrec_0, atslab__pos_ncol)) ;

/* funbodyinstrlst(end) */
ATSreturn(tmpret1) ;
} /* end of [_057_cygdrive_057_c_057_cygwin_057_home_057_brand_000_057_FBA_057_FALCON_057_GPR_057_falcon_056_sats__position_get_now] */

/*
/cygdrive/c/cygwin/home/brand_000/FBA/FALCON/GPR/falcon_position.dats: 904(line=63, offs=16) -- 947(line=64, offs=36)
*/
/*
local: 
global: print_position$1$0(level=0)
local: 
global: 
*/
ATSglobaldec()
atsvoid_t0ype
_057_cygdrive_057_c_057_cygwin_057_home_057_brand_000_057_FBA_057_FALCON_057_GPR_057_falcon_056_sats__print_position(atstype_boxed arg0)
{
/* tmpvardeclst(beg) */
ATStmpdec_void(tmpret2, atsvoid_t0ype) ;
/* tmpvardeclst(end) */
/* funbodyinstrlst(beg) */
/*
emit_instr: loc0 = /cygdrive/c/cygwin/home/brand_000/FBA/FALCON/GPR/falcon_position.dats: 889(line=63, offs=1) -- 947(line=64, offs=36)
*/
__patsflab_print_position:
/*
emit_instr: loc0 = /cygdrive/c/cygwin/home/brand_000/FBA/FALCON/GPR/falcon_position.dats: 914(line=64, offs=3) -- 947(line=64, offs=36)
*/
ATSINSmove_void(tmpret2, _057_cygdrive_057_c_057_cygwin_057_home_057_brand_000_057_FBA_057_FALCON_057_GPR_057_falcon_056_sats__fprint_position(atspre_FILE_stdout, arg0)) ;

/* funbodyinstrlst(end) */
ATSreturn_void(tmpret2) ;
} /* end of [_057_cygdrive_057_c_057_cygwin_057_home_057_brand_000_057_FBA_057_FALCON_057_GPR_057_falcon_056_sats__print_position] */

/*
/cygdrive/c/cygwin/home/brand_000/FBA/FALCON/GPR/falcon_position.dats: 979(line=68, offs=3) -- 1105(line=77, offs=4)
*/
/*
local: 
global: fprint_position$2$0(level=0)
local: 
global: 
*/
ATSglobaldec()
atsvoid_t0ype
_057_cygdrive_057_c_057_cygwin_057_home_057_brand_000_057_FBA_057_FALCON_057_GPR_057_falcon_056_sats__fprint_position(atstkind_type(atstype_ptrk) arg0, atstype_boxed arg1)
{
/* tmpvardeclst(beg) */
ATStmpdec_void(tmpret3, atsvoid_t0ype) ;
ATStmpdec(tmp4, atstkind_t0ype(atstype_int)) ;
ATStmpdec(tmp5, atstkind_t0ype(atstype_int)) ;
ATStmpdec(tmp6, atstkind_t0ype(atstype_int)) ;
ATStmpdec_void(tmp7, atsvoid_t0ype) ;
ATStmpdec_void(tmp8, atsvoid_t0ype) ;
ATStmpdec_void(tmp9, atsvoid_t0ype) ;
ATStmpdec_void(tmp10, atsvoid_t0ype) ;
ATStmpdec_void(tmp11, atsvoid_t0ype) ;
/* tmpvardeclst(end) */
/* funbodyinstrlst(beg) */
/*
emit_instr: loc0 = /cygdrive/c/cygwin/home/brand_000/FBA/FALCON/GPR/falcon_position.dats: 961(line=67, offs=1) -- 1105(line=77, offs=4)
*/
__patsflab_fprint_position:
/*
emit_instr: loc0 = /cygdrive/c/cygwin/home/brand_000/FBA/FALCON/GPR/falcon_position.dats: 992(line=68, offs=16) -- 1105(line=77, offs=4)
*/
/*
letpush(beg)
*/
/*
emit_instr: loc0 = /cygdrive/c/cygwin/home/brand_000/FBA/FALCON/GPR/falcon_position.dats: 1002(line=69, offs=7) -- 1024(line=69, offs=29)
*/

/*
emit_instr: loc0 = /cygdrive/c/cygwin/home/brand_000/FBA/FALCON/GPR/falcon_position.dats: 1007(line=69, offs=12) -- 1011(line=69, offs=16)
*/
ATSINSmove(tmp4, ATSSELcon(arg1, postiats_tysum_1, atslab__0)) ;
/*
emit_instr: loc0 = /cygdrive/c/cygwin/home/brand_000/FBA/FALCON/GPR/falcon_position.dats: 1013(line=69, offs=18) -- 1017(line=69, offs=22)
*/
ATSINSmove(tmp5, ATSSELcon(arg1, postiats_tysum_1, atslab__1)) ;
/*
emit_instr: loc0 = /cygdrive/c/cygwin/home/brand_000/FBA/FALCON/GPR/falcon_position.dats: 1019(line=69, offs=24) -- 1023(line=69, offs=28)
*/
ATSINSmove(tmp6, ATSSELcon(arg1, postiats_tysum_1, atslab__2)) ;
/*
letpush(end)
*/

/*
emit_instr: loc0 = /cygdrive/c/cygwin/home/brand_000/FBA/FALCON/GPR/falcon_position.dats: 1037(line=72, offs=1) -- 1098(line=75, offs=2)
*/
ATSINSmove_void(tmp7, atspre_fprint_int(arg0, tmp4)) ;

/*
emit_instr: loc0 = /cygdrive/c/cygwin/home/brand_000/FBA/FALCON/GPR/falcon_position.dats: 1037(line=72, offs=1) -- 1098(line=75, offs=2)
*/
ATSINSmove_void(tmp8, atspre_fprint_string(arg0, ATSPMVstring("(line="))) ;

/*
emit_instr: loc0 = /cygdrive/c/cygwin/home/brand_000/FBA/FALCON/GPR/falcon_position.dats: 1037(line=72, offs=1) -- 1098(line=75, offs=2)
*/
ATSINSmove_void(tmp9, atspre_fprint_int(arg0, tmp5)) ;

/*
emit_instr: loc0 = /cygdrive/c/cygwin/home/brand_000/FBA/FALCON/GPR/falcon_position.dats: 1037(line=72, offs=1) -- 1098(line=75, offs=2)
*/
ATSINSmove_void(tmp10, atspre_fprint_string(arg0, ATSPMVstring(", offs="))) ;

/*
emit_instr: loc0 = /cygdrive/c/cygwin/home/brand_000/FBA/FALCON/GPR/falcon_position.dats: 1037(line=72, offs=1) -- 1098(line=75, offs=2)
*/
ATSINSmove_void(tmp11, atspre_fprint_int(arg0, tmp6)) ;

/*
emit_instr: loc0 = /cygdrive/c/cygwin/home/brand_000/FBA/FALCON/GPR/falcon_position.dats: 1037(line=72, offs=1) -- 1098(line=75, offs=2)
*/
ATSINSmove_void(tmpret3, atspre_fprint_string(arg0, ATSPMVstring(")"))) ;

/*
emit_instr: loc0 = /cygdrive/c/cygwin/home/brand_000/FBA/FALCON/GPR/falcon_position.dats: 992(line=68, offs=16) -- 1105(line=77, offs=4)
*/
/*
INSletpop()
*/
/* funbodyinstrlst(end) */
ATSreturn_void(tmpret3) ;
} /* end of [_057_cygdrive_057_c_057_cygwin_057_home_057_brand_000_057_FBA_057_FALCON_057_GPR_057_falcon_056_sats__fprint_position] */

/*
/cygdrive/c/cygwin/home/brand_000/FBA/FALCON/GPR/falcon_position.dats: 1193(line=83, offs=3) -- 1413(line=92, offs=2)
*/
/*
local: 
global: the_position_incby1$3$0(level=0)
local: 
global: 
*/
ATSglobaldec()
atsvoid_t0ype
_057_cygdrive_057_c_057_cygwin_057_home_057_brand_000_057_FBA_057_FALCON_057_GPR_057_falcon_position_056_dats__the_position_incby1(atstkind_t0ype(atstype_int) arg0)
{
/* tmpvardeclst(beg) */
ATStmpdec_void(tmpret12, atsvoid_t0ype) ;
ATStmpdec(tmp13, atstkind_t0ype(atstype_bool)) ;
ATStmpdec(tmp18, atstkind_t0ype(atstype_int)) ;
ATStmpdec(tmp19, atstkind_t0ype(atstype_bool)) ;
ATStmpdec(tmp20, atstkind_t0ype(atstype_char)) ;
ATStmpdec(tmp21, atstkind_t0ype(atstype_int)) ;
/* tmpvardeclst(end) */
/* funbodyinstrlst(beg) */
/*
emit_instr: loc0 = /cygdrive/c/cygwin/home/brand_000/FBA/FALCON/GPR/falcon_position.dats: 1171(line=82, offs=1) -- 1413(line=92, offs=2)
*/
__patsflab_the_position_incby1:
/*
emit_instr: loc0 = /cygdrive/c/cygwin/home/brand_000/FBA/FALCON/GPR/falcon_position.dats: 1204(line=83, offs=14) -- 1211(line=83, offs=21)
*/
ATSINSmove(tmp13, ATSLIB_056_prelude__gte_g0int_int__4__1(arg0, ATSPMVi0nt(0))) ;

/*
emit_instr: loc0 = /cygdrive/c/cygwin/home/brand_000/FBA/FALCON/GPR/falcon_position.dats: 1200(line=83, offs=10) -- 1413(line=92, offs=2)
*/
ATSif(
tmp13
) ATSthen() {
/*
emit_instr: loc0 = /cygdrive/c/cygwin/home/brand_000/FBA/FALCON/GPR/falcon_position.dats: 1218(line=84, offs=1) -- 1413(line=92, offs=2)
*/
/*
letpush(beg)
*/
/*
emit_instr: loc0 = /cygdrive/c/cygwin/home/brand_000/FBA/FALCON/GPR/falcon_position.dats: 1254(line=86, offs=23) -- 1272(line=86, offs=41)
*/
ATSINSmove(tmp18, atspre_g0int_add_int(ATSSELfltrec(ATSderef(ATSPMVcastfn(ref_make_viewptr, atstkind_type(atstype_ptrk), ATSPMVptrof(statmpref0)), postiats_tyrec_0), postiats_tyrec_0, atslab__pos_ntot), ATSPMVi0nt(1))) ;

/*
emit_instr: loc0 = /cygdrive/c/cygwin/home/brand_000/FBA/FALCON/GPR/falcon_position.dats: 1234(line=86, offs=3) -- 1272(line=86, offs=41)
*/
ATSINSstore(ATSSELfltrec(ATSderef(ATSPMVcastfn(ref_make_viewptr, atstkind_type(atstype_ptrk), ATSPMVptrof(statmpref0)), postiats_tyrec_0), postiats_tyrec_0, atslab__pos_ntot), tmp18) ;
/*
letpush(end)
*/

/*
emit_instr: loc0 = /cygdrive/c/cygwin/home/brand_000/FBA/FALCON/GPR/falcon_position.dats: 1288(line=87, offs=16) -- 1300(line=87, offs=28)
*/
ATSINSmove(tmp20, atspre_int2char0(arg0)) ;

/*
emit_instr: loc0 = /cygdrive/c/cygwin/home/brand_000/FBA/FALCON/GPR/falcon_position.dats: 1288(line=87, offs=16) -- 1308(line=87, offs=36)
*/
ATSINSmove(tmp19, atspre_eq_char0_char0(tmp20, ATSPMVchar('\n'))) ;

/*
emit_instr: loc0 = /cygdrive/c/cygwin/home/brand_000/FBA/FALCON/GPR/falcon_position.dats: 1284(line=87, offs=12) -- 1411(line=91, offs=4)
*/
ATSif(
tmp19
) ATSthen() {
/*
emit_instr: loc0 = /cygdrive/c/cygwin/home/brand_000/FBA/FALCON/GPR/falcon_position.dats: 1317(line=88, offs=3) -- 1411(line=91, offs=4)
*/
/*
letpush(beg)
*/
/*
emit_instr: loc0 = /cygdrive/c/cygwin/home/brand_000/FBA/FALCON/GPR/falcon_position.dats: 1332(line=89, offs=14) -- 1353(line=89, offs=35)
*/
ATSINSstore(ATSSELfltrec(ATSderef(ATSPMVcastfn(ref_make_viewptr, atstkind_type(atstype_ptrk), ATSPMVptrof(statmpref0)), postiats_tyrec_0), postiats_tyrec_0, atslab__pos_ncol), ATSPMVi0nt(0)) ;
/*
letpush(end)
*/

/*
emit_instr: loc0 = /cygdrive/c/cygwin/home/brand_000/FBA/FALCON/GPR/falcon_position.dats: 1387(line=90, offs=34) -- 1407(line=90, offs=54)
*/
ATSINSmove(tmp21, atspre_g0int_add_int(ATSSELfltrec(ATSderef(ATSPMVcastfn(ref_make_viewptr, atstkind_type(atstype_ptrk), ATSPMVptrof(statmpref0)), postiats_tyrec_0), postiats_tyrec_0, atslab__pos_nrow), ATSPMVi0nt(1))) ;

/*
emit_instr: loc0 = /cygdrive/c/cygwin/home/brand_000/FBA/FALCON/GPR/falcon_position.dats: 1367(line=90, offs=14) -- 1407(line=90, offs=54)
*/
ATSINSstore(ATSSELfltrec(ATSderef(ATSPMVcastfn(ref_make_viewptr, atstkind_type(atstype_ptrk), ATSPMVptrof(statmpref0)), postiats_tyrec_0), postiats_tyrec_0, atslab__pos_nrow), tmp21) ;
/*
emit_instr: loc0 = /cygdrive/c/cygwin/home/brand_000/FBA/FALCON/GPR/falcon_position.dats: 1367(line=90, offs=14) -- 1407(line=90, offs=54)
*/
ATSINSmove_void(tmpret12, ATSempty()) ;
/*
emit_instr: loc0 = /cygdrive/c/cygwin/home/brand_000/FBA/FALCON/GPR/falcon_position.dats: 1317(line=88, offs=3) -- 1411(line=91, offs=4)
*/
/*
INSletpop()
*/
} ATSelse() {
/*
emit_instr: loc0 = /cygdrive/c/cygwin/home/brand_000/FBA/FALCON/GPR/falcon_position.dats: 1411(line=91, offs=4) -- 1411(line=91, offs=4)
*/
ATSINSmove_void(tmpret12, ATSempty()) ;
} /* ATSendif */
/*
emit_instr: loc0 = /cygdrive/c/cygwin/home/brand_000/FBA/FALCON/GPR/falcon_position.dats: 1218(line=84, offs=1) -- 1413(line=92, offs=2)
*/
/*
INSletpop()
*/
} ATSelse() {
/*
emit_instr: loc0 = /cygdrive/c/cygwin/home/brand_000/FBA/FALCON/GPR/falcon_position.dats: 1413(line=92, offs=2) -- 1413(line=92, offs=2)
*/
ATSINSmove_void(tmpret12, ATSempty()) ;
} /* ATSendif */
/* funbodyinstrlst(end) */
ATSreturn_void(tmpret12) ;
} /* end of [_057_cygdrive_057_c_057_cygwin_057_home_057_brand_000_057_FBA_057_FALCON_057_GPR_057_falcon_position_056_dats__the_position_incby1] */

#if(0)
/*
/home/brand_000/ATS-Postiats/prelude/DATS/integer.dats: 28201(line=760, offs=15) -- 28242(line=760, offs=56)
*/
/*
local: 
global: gte_g0int_int$4$0(level=0)
local: 
global: 
*/
ATSglobaldec()
/*
imparg = tk(4344)
tmparg = S2Evar(tk(4344))
tmpsub = None()
*/
atstkind_t0ype(atstype_bool)
ATSLIB_056_prelude__gte_g0int_int__4(atstkind_t0ype(atstyvar_type(tk)) arg0, atstkind_t0ype(atstype_int) arg1)
{
/* tmpvardeclst(beg) */
ATStmpdec(tmpret14, atstkind_t0ype(atstype_bool)) ;
ATStmpdec(tmp15, atstkind_t0ype(atstyvar_type(tk))) ;
/* tmpvardeclst(end) */
/* funbodyinstrlst(beg) */
/*
emit_instr: loc0 = /home/brand_000/ATS-Postiats/prelude/DATS/integer.dats: 28187(line=760, offs=1) -- 28242(line=760, offs=56)
*/
__patsflab_gte_g0int_int:
/*
emit_instr: loc0 = /home/brand_000/ATS-Postiats/prelude/DATS/integer.dats: 28228(line=760, offs=42) -- 28240(line=760, offs=54)
*/
ATSINSmove(tmp15, PMVtmpltcst(g0int2int<S2Eextkind(atstype_int), S2Evar(tk(4344))>)(arg1)) ;

/*
emit_instr: loc0 = /home/brand_000/ATS-Postiats/prelude/DATS/integer.dats: 28210(line=760, offs=24) -- 28242(line=760, offs=56)
*/
ATSINSmove(tmpret14, PMVtmpltcst(g0int_gte<S2Evar(tk(4344))>)(arg0, tmp15)) ;

/* funbodyinstrlst(end) */
ATSreturn(tmpret14) ;
} /* end of [ATSLIB_056_prelude__gte_g0int_int__4] */
#endif // end of [TEMPLATE]

/*
/home/brand_000/ATS-Postiats/prelude/DATS/integer.dats: 28201(line=760, offs=15) -- 28242(line=760, offs=56)
*/
/*
local: 
global: gte_g0int_int$4$1(level=1)
local: 
global: 
*/
ATSstaticdec()
/*
imparg = tk(4344)
tmparg = S2Evar(tk(4344))
tmpsub = Some(tk(4344) -> S2Eextkind(atstype_int))
*/
atstkind_t0ype(atstype_bool)
ATSLIB_056_prelude__gte_g0int_int__4__1(atstkind_t0ype(atstype_int) arg0, atstkind_t0ype(atstype_int) arg1)
{
/* tmpvardeclst(beg) */
ATStmpdec(tmpret14__1, atstkind_t0ype(atstype_bool)) ;
ATStmpdec(tmp15__1, atstkind_t0ype(atstype_int)) ;
/* tmpvardeclst(end) */
/* funbodyinstrlst(beg) */
/*
emit_instr: loc0 = /home/brand_000/ATS-Postiats/prelude/DATS/integer.dats: 28187(line=760, offs=1) -- 28242(line=760, offs=56)
*/
__patsflab_gte_g0int_int:
/*
emit_instr: loc0 = /home/brand_000/ATS-Postiats/prelude/DATS/integer.dats: 28228(line=760, offs=42) -- 28240(line=760, offs=54)
*/
ATSINSmove(tmp15__1, atspre_g0int2int_int_int(arg1)) ;

/*
emit_instr: loc0 = /home/brand_000/ATS-Postiats/prelude/DATS/integer.dats: 28210(line=760, offs=24) -- 28242(line=760, offs=56)
*/
ATSINSmove(tmpret14__1, atspre_g0int_gte_int(arg0, tmp15__1)) ;

/* funbodyinstrlst(end) */
ATSreturn(tmpret14__1) ;
} /* end of [ATSLIB_056_prelude__gte_g0int_int__4__1] */

/*
/cygdrive/c/cygwin/home/brand_000/FBA/FALCON/GPR/falcon_position.dats: 1503(line=98, offs=3) -- 1679(line=109, offs=4)
*/
/*
local: 
global: fprint_the_position$9$0(level=0)
local: 
global: 
*/
ATSglobaldec()
atsvoid_t0ype
_057_cygdrive_057_c_057_cygwin_057_home_057_brand_000_057_FBA_057_FALCON_057_GPR_057_falcon_056_sats__fprint_the_position(atstkind_type(atstype_ptrk) arg0)
{
/* tmpvardeclst(beg) */
ATStmpdec_void(tmpret22, atsvoid_t0ype) ;
ATStmpdec(tmp23, atstkind_t0ype(atstype_int)) ;
ATStmpdec(tmp24, atstkind_t0ype(atstype_int)) ;
ATStmpdec(tmp25, atstkind_t0ype(atstype_int)) ;
ATStmpdec_void(tmp26, atsvoid_t0ype) ;
ATStmpdec_void(tmp27, atsvoid_t0ype) ;
ATStmpdec_void(tmp28, atsvoid_t0ype) ;
ATStmpdec_void(tmp29, atsvoid_t0ype) ;
ATStmpdec_void(tmp30, atsvoid_t0ype) ;
/* tmpvardeclst(end) */
/* funbodyinstrlst(beg) */
/*
emit_instr: loc0 = /cygdrive/c/cygwin/home/brand_000/FBA/FALCON/GPR/falcon_position.dats: 1481(line=97, offs=1) -- 1679(line=109, offs=4)
*/
__patsflab_fprint_the_position:
/*
emit_instr: loc0 = /cygdrive/c/cygwin/home/brand_000/FBA/FALCON/GPR/falcon_position.dats: 1511(line=98, offs=11) -- 1679(line=109, offs=4)
*/
/*
letpush(beg)
*/
/*
emit_instr: loc0 = /cygdrive/c/cygwin/home/brand_000/FBA/FALCON/GPR/falcon_position.dats: 1528(line=99, offs=14) -- 1544(line=99, offs=30)
*/
ATSINSmove(tmp23, ATSSELfltrec(ATSderef(ATSPMVcastfn(ref_make_viewptr, atstkind_type(atstype_ptrk), ATSPMVptrof(statmpref0)), postiats_tyrec_0), postiats_tyrec_0, atslab__pos_ntot)) ;
/*
emit_instr: loc0 = /cygdrive/c/cygwin/home/brand_000/FBA/FALCON/GPR/falcon_position.dats: 1558(line=100, offs=14) -- 1574(line=100, offs=30)
*/
ATSINSmove(tmp24, ATSSELfltrec(ATSderef(ATSPMVcastfn(ref_make_viewptr, atstkind_type(atstype_ptrk), ATSPMVptrof(statmpref0)), postiats_tyrec_0), postiats_tyrec_0, atslab__pos_nrow)) ;
/*
emit_instr: loc0 = /cygdrive/c/cygwin/home/brand_000/FBA/FALCON/GPR/falcon_position.dats: 1588(line=101, offs=14) -- 1604(line=101, offs=30)
*/
ATSINSmove(tmp25, ATSSELfltrec(ATSderef(ATSPMVcastfn(ref_make_viewptr, atstkind_type(atstype_ptrk), ATSPMVptrof(statmpref0)), postiats_tyrec_0), postiats_tyrec_0, atslab__pos_ncol)) ;
/*
letpush(end)
*/

/*
emit_instr: loc0 = /cygdrive/c/cygwin/home/brand_000/FBA/FALCON/GPR/falcon_position.dats: 1611(line=104, offs=1) -- 1672(line=107, offs=2)
*/
ATSINSmove_void(tmp26, atspre_fprint_int(arg0, tmp23)) ;

/*
emit_instr: loc0 = /cygdrive/c/cygwin/home/brand_000/FBA/FALCON/GPR/falcon_position.dats: 1611(line=104, offs=1) -- 1672(line=107, offs=2)
*/
ATSINSmove_void(tmp27, atspre_fprint_string(arg0, ATSPMVstring("(line="))) ;

/*
emit_instr: loc0 = /cygdrive/c/cygwin/home/brand_000/FBA/FALCON/GPR/falcon_position.dats: 1611(line=104, offs=1) -- 1672(line=107, offs=2)
*/
ATSINSmove_void(tmp28, atspre_fprint_int(arg0, tmp24)) ;

/*
emit_instr: loc0 = /cygdrive/c/cygwin/home/brand_000/FBA/FALCON/GPR/falcon_position.dats: 1611(line=104, offs=1) -- 1672(line=107, offs=2)
*/
ATSINSmove_void(tmp29, atspre_fprint_string(arg0, ATSPMVstring(", offs="))) ;

/*
emit_instr: loc0 = /cygdrive/c/cygwin/home/brand_000/FBA/FALCON/GPR/falcon_position.dats: 1611(line=104, offs=1) -- 1672(line=107, offs=2)
*/
ATSINSmove_void(tmp30, atspre_fprint_int(arg0, tmp25)) ;

/*
emit_instr: loc0 = /cygdrive/c/cygwin/home/brand_000/FBA/FALCON/GPR/falcon_position.dats: 1611(line=104, offs=1) -- 1672(line=107, offs=2)
*/
ATSINSmove_void(tmpret22, atspre_fprint_string(arg0, ATSPMVstring(")"))) ;

/*
emit_instr: loc0 = /cygdrive/c/cygwin/home/brand_000/FBA/FALCON/GPR/falcon_position.dats: 1511(line=98, offs=11) -- 1679(line=109, offs=4)
*/
/*
INSletpop()
*/
/* funbodyinstrlst(end) */
ATSreturn_void(tmpret22) ;
} /* end of [_057_cygdrive_057_c_057_cygwin_057_home_057_brand_000_057_FBA_057_FALCON_057_GPR_057_falcon_056_sats__fprint_the_position] */

/*
** for initialization(dynloading)
*/
atsvoid_t0ype
_057_cygdrive_057_c_057_cygwin_057_home_057_brand_000_057_FBA_057_FALCON_057_GPR_057_falcon_position_056_dats__dynload()
{
ATSdynload1(
_057_cygdrive_057_c_057_cygwin_057_home_057_brand_000_057_FBA_057_FALCON_057_GPR_057_falcon_position_056_dats__dynloadflag
) ;
ATSif(
ATSCKiseqz(
_057_cygdrive_057_c_057_cygwin_057_home_057_brand_000_057_FBA_057_FALCON_057_GPR_057_falcon_position_056_dats__dynloadflag
)
) ATSthen() {
ATSdynloadset(_057_cygdrive_057_c_057_cygwin_057_home_057_brand_000_057_FBA_057_FALCON_057_GPR_057_falcon_position_056_dats__dynloadflag) ;
/*
dynexnlst-initize(beg)
*/
/*
dynexnlst-initize(end)
*/
/* local */
/*
emit_instr: loc0 = /cygdrive/c/cygwin/home/brand_000/FBA/FALCON/GPR/falcon_position.dats: 526(line=44, offs=5) -- 529(line=44, offs=8)
*/
/*
ATSINStmpdec(statmpref0) ;
*/
/*
emit_instr: loc0 = /cygdrive/c/cygwin/home/brand_000/FBA/FALCON/GPR/falcon_position.dats: 551(line=45, offs=10) -- 568(line=45, offs=27)
*/
ATSINSstore(ATSSELfltrec(statmpref0, postiats_tyrec_0, atslab__pos_ntot), ATSPMVi0nt(0)) ;
/*
emit_instr: loc0 = /cygdrive/c/cygwin/home/brand_000/FBA/FALCON/GPR/falcon_position.dats: 578(line=46, offs=10) -- 595(line=46, offs=27)
*/
ATSINSstore(ATSSELfltrec(statmpref0, postiats_tyrec_0, atslab__pos_nrow), ATSPMVi0nt(0)) ;
/*
emit_instr: loc0 = /cygdrive/c/cygwin/home/brand_000/FBA/FALCON/GPR/falcon_position.dats: 605(line=47, offs=10) -- 622(line=47, offs=27)
*/
ATSINSstore(ATSSELfltrec(statmpref0, postiats_tyrec_0, atslab__pos_ncol), ATSPMVi0nt(0)) ;
/* (*nothing*) */
/* in of [local] */
/* end of [local] */
} /* ATSendif */
ATSreturn_void() ;
} /* end of [*_dynload] */
