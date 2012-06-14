/*
 * fidcalc.h
 *
 *  Created on: Jun 24, 2010
 *      Author: zdenek
 */

#ifndef FIDCALC_H_
#define FIDCALC_H_

#include "tcl.h"
#include "sim.h"

typedef struct _acq_data {
	complx *fid, *lams, *frs;
	int *irow, *icol;
	double cosph, sinph, weight, taur, wr, sw;
	int Nacq, Ng, Np, m, dim, isphase, ncp;
} acq_data;

int is_rhosymmetry(mat_complx *fstart, mat_complx *fdetect);
void acqblock_disable_command(Sim_wsp *wsp, char *cmd);
void acqblock_sto_incr(Sim_wsp *wsp);
void direct_acqblock(Tcl_Interp *interp,Tcl_Obj *obj,Sim_info *sim,Sim_wsp *wsp);
void direct_acqblock_freq(Tcl_Interp *interp,Tcl_Obj *obj,Sim_info *sim,Sim_wsp *wsp);
void direct_acqblock_time_FWT(Tcl_Interp *interp,Tcl_Obj *obj,Sim_info *sim,Sim_wsp *wsp);
void gcompute_acqblock(Tcl_Interp *interp,Tcl_Obj *obj,Sim_info *sim,Sim_wsp *wsp);

void new_gcompute(Sim_info *s, Sim_wsp *wsp);
void new_gcompute_time(Sim_info *s, Sim_wsp *wsp);
void new_gcompute_freq(Sim_info *s, Sim_wsp *wsp);
void collect_fid_interpol(acq_data *acqdata);
void collect_spc_interpol(acq_data *acqdata);
void collect_fid_interpol_direct(acq_data *acqdata);
void collect_spc_interpol_direct(acq_data *acqdata);


#endif /* FIDCALC_H_ */
