#ifndef INC_1OOM_GAME_STR_H
#define INC_1OOM_GAME_STR_H

#include "game_design.h"
#include "game_planet.h"
#include "game_shiptech.h"
#include "game_types.h"
#include "types.h"

extern const char *game_str_mm_continue;
extern const char *game_str_mm_load;
extern const char *game_str_mm_new;
extern const char *game_str_mm_quit;
extern const char *game_str_tbl_race[RACE_NUM + 1];
extern const char *game_str_tbl_races[RACE_NUM];
extern const char *game_str_tbl_banner[BANNER_NUM + 1];
extern const char *game_str_tbl_gsize[GALAXY_SIZE_NUM];
extern const char *game_str_tbl_diffic[DIFFICULTY_NUM];
extern const char *game_str_tbl_oppon[5];
extern const char *game_str_tbl_traits[RACE_NUM * 3];
extern const char *game_str_tbl_trait1[TRAIT1_NUM];
extern const char *game_str_tbl_trait2[TRAIT2_NUM];
extern const char *game_str_ng_choose_race;
extern const char *game_str_ng_choose_banner;
extern const char *game_str_ng_your_name;
extern const char *game_str_ng_home_name;
extern const char *game_str_ng_ai;
extern const char *game_str_ng_computer;
extern const char *game_str_ng_player;
extern const char *game_str_ng_cancel;
extern const char *game_str_ng_ok;
extern const char *game_str_ng_allai;
#define PLANET_NAMES_MAX    110
extern const char *game_str_tbl_planet_names[PLANET_NAMES_MAX];
extern const char *game_str_tbl_home_names[RACE_NUM + 1];
extern const char *game_str_rndempname;
extern const char *game_str_planet_name_orion;
extern const char *game_str_tbl_ship_names[RACE_NUM * SHIP_NAME_NUM];
extern const char *game_str_tbl_stship_names[NUM_SHIPDESIGNS];
extern const char *game_str_tbl_monsh_names[MONSTER_NUM];
extern const char *game_str_tbl_mon_names[MONSTER_NUM];
extern const char *game_str_ai_colonyship;
extern const char *game_str_st_none;
extern const char *game_str_st_none2;
extern const char *game_str_tbl_st_weap[WEAPON_NUM - 1];
extern const char *game_str_tbl_st_weapx[WEAPON_NUM - 1];
extern const char *game_str_tbl_st_comp[SHIP_COMP_NUM - 1];
extern const char *game_str_tbl_st_engine[SHIP_ENGINE_NUM];
extern const char *game_str_tbl_st_armor[SHIP_ARMOR_NUM];
extern const char *game_str_tbl_st_shield[SHIP_SHIELD_NUM - 1];
extern const char *game_str_tbl_st_jammer[SHIP_JAMMER_NUM - 1];
extern const char *game_str_tbl_st_specsh[SHIP_SPECIAL_NUM];
extern const char *game_str_tbl_st_special[SHIP_SPECIAL_NUM - 1];
extern const char *game_str_tbl_st_specialx[SHIP_SPECIAL_NUM - 1];
extern const char *game_str_tbl_st_hull[SHIP_HULL_NUM];
extern const char *game_str_sm_crystal;
extern const char *game_str_sm_amoeba;
extern const char *game_str_sm_game;
extern const char *game_str_sm_design;
extern const char *game_str_sm_fleet;
extern const char *game_str_sm_map;
extern const char *game_str_sm_races;
extern const char *game_str_sm_planets;
extern const char *game_str_sm_tech;
extern const char *game_str_sm_next_turn;
extern const char *game_str_sm_range;
extern const char *game_str_sm_parsec;
extern const char *game_str_sm_parsecs;
extern const char *game_str_sm_parsecs2;
extern const char *game_str_sm_colony;
extern const char *game_str_sm_lastrep;
extern const char *game_str_sm_stargate;
extern const char *game_str_sm_prodnone;
extern const char *game_str_sm_prod_y;
extern const char *game_str_sm_defupg;
extern const char *game_str_sm_defshld;
extern const char *game_str_sm_refit;
extern const char *game_str_sm_indmax;
extern const char *game_str_sm_indres;
extern const char *game_str_sm_ecowaste;
extern const char *game_str_sm_ecoclean;
extern const char *game_str_sm_ecoatmos;
extern const char *game_str_sm_ecotform;
extern const char *game_str_sm_ecosoil;
extern const char *game_str_sm_ecogaia;
extern const char *game_str_sm_ecopop;
extern const char *game_str_sm_unexplored;
extern const char *game_str_sm_nohabit;
extern const char *game_str_sm__planets;
extern const char *game_str_tbl_sm_pltype[PLANET_TYPE_NUM];
extern const char *game_str_tbl_sm_stinfo[STAR_TYPE_NUM];
extern const char *game_str_sm_plague;
extern const char *game_str_sm_nova;
extern const char *game_str_sm_comet;
extern const char *game_str_sm_pirates;
extern const char *game_str_sm_rebellion;
extern const char *game_str_sm_unrest;
extern const char *game_str_sm_accident;
extern const char *game_str_tbl_sm_pgrowth[PLANET_GROWTH_NUM];
extern const char *game_str_tbl_sm_pspecial[PLANET_SPECIAL_NUM];
extern const char *game_str_sm_pop;
extern const char *game_str_sm_max;
extern const char *game_str_sm_hasreached;
extern const char *game_str_sm_indmaxof;
extern const char *game_str_sm_factories;
extern const char *game_str_sm_extrares;
extern const char *game_str_sm_popmaxof;
extern const char *game_str_sm_colonists;
extern const char *game_str_sm_hasterraf;
extern const char *game_str_sm_new;
extern const char *game_str_tbl_sm_terraf[3];
extern const char *game_str_sm_envwith;
extern const char *game_str_tbl_sm_envmore[3];
extern const char *game_str_sm_stdgrow;
extern const char *game_str_sm_hasfsgate;
extern const char *game_str_sm_hasfshield;
extern const char *game_str_sm_planshield;
extern const char *game_str_sm_planratio;
extern const char *game_str_sm_fleetdep;
extern const char *game_str_sm_destoor;
extern const char *game_str_sm_destoor2;
extern const char *game_str_sm_parsfromcc;
extern const char *game_str_sm_eta;
extern const char *game_str_sm_turn;
extern const char *game_str_sm_turns;
extern const char *game_str_sm_chdest;
extern const char *game_str_sm_outsr;
extern const char *game_str_sm_sreloc;
extern const char *game_str_sm_sreloc2;
extern const char *game_str_sm_delay;
extern const char *game_str_sm_seltr;
extern const char *game_str_sm_notrange;
extern const char *game_str_sm_notrange1;
extern const char *game_str_sm_notrange2;
extern const char *game_str_sm_notrange3;
extern const char *game_str_sm_trfirste;
extern const char *game_str_sm_trcontr1;
extern const char *game_str_sm_trcontr2;
extern const char *game_str_sm_trfirstc;
extern const char *game_str_sm_trwarna;
extern const char *game_str_sm_trwarnm1;
extern const char *game_str_sm_trwarnm2;
extern const char *game_str_sm_trchnum1;
extern const char *game_str_sm_trchnum2;
extern const char *game_str_sm_trans1;
extern const char *game_str_sm_transs;
extern const char *game_str_sm_tdest;
extern const char *game_str_sm_bomb1;
extern const char *game_str_sm_bomb2;
extern const char *game_str_sm_trinb1;
extern const char *game_str_sm_trinb1s;
extern const char *game_str_sm_trinb2;
extern const char *game_str_sm_obomb1;
extern const char *game_str_sm_obomb2;
extern const char *game_str_sm_cdest1;
extern const char *game_str_sm_cdest2;
extern const char *game_str_sm_ineff1;
extern const char *game_str_sm_ineff2;
extern const char *game_str_sm_bkill1;
extern const char *game_str_sm_bkill2;
extern const char *game_str_sm_bfact1;
extern const char *game_str_sm_bfact1s;
extern const char *game_str_sm_bfact2;
extern const char *game_str_sm_traad1;
extern const char *game_str_sm_traad2;
extern const char *game_str_sm_trbdb1;
extern const char *game_str_sm_trbdb2;
extern const char *game_str_sm_inorbit;
extern const char *game_str_tbl_roman[31];
extern const char *game_str_no_events;
extern const char *game_str_bc;
extern const char *game_str_y;
extern const char *game_str_year;
extern const char *game_str_player;
extern const char *game_str_pl_reserve;
extern const char *game_str_pl_plague;
extern const char *game_str_pl_nova;
extern const char *game_str_pl_comet;
extern const char *game_str_pl_pirates;
extern const char *game_str_pl_rebellion;
extern const char *game_str_pl_unrest;
extern const char *game_str_pl_accident;
extern const char *game_str_pl_spending;
extern const char *game_str_pl_tincome;
extern const char *game_str_pl_transof;
extern const char *game_str_pl_resto;
extern const char *game_str_sd_cancel;
extern const char *game_str_sd_build;
extern const char *game_str_sd_clear;
extern const char *game_str_sd_comp;
extern const char *game_str_sd_shield;
extern const char *game_str_sd_ecm;
extern const char *game_str_sd_armor;
extern const char *game_str_sd_engine;
extern const char *game_str_sd_man;
extern const char *game_str_tbl_sd_spec[SPECIAL_SLOT_NUM];
extern const char *game_str_tbl_sd_weap[WEAPON_SLOT_NUM];
extern const char *game_str_sd_count;
extern const char *game_str_sd_sweap;
extern const char *game_str_sd_damage;
extern const char *game_str_sd_rng;
extern const char *game_str_sd_notes;
extern const char *game_str_sd_hp;
extern const char *game_str_sd_warp;
extern const char *game_str_sd_def;
extern const char *game_str_sd_cspeed;
extern const char *game_str_sd_absorbs;
extern const char *game_str_sd_hit;
extern const char *game_str_sd_hits;
extern const char *game_str_sd_misdef;
extern const char *game_str_sd_att;
extern const char *game_str_sd_comptype;
extern const char *game_str_sd_cost;
extern const char *game_str_sd_size;
extern const char *game_str_sd_power;
extern const char *game_str_sd_space;
extern const char *game_str_sd_comps;
extern const char *game_str_sd_shieldtype;
extern const char *game_str_sd_shields;
extern const char *game_str_sd_ecmtype;
extern const char *game_str_sd_ecm2;
extern const char *game_str_sd_armortype;
extern const char *game_str_sd_armor2;
extern const char *game_str_sd_engtype;
extern const char *game_str_sd_numengs;
extern const char *game_str_sd_engs;
extern const char *game_str_sd_man1;
extern const char *game_str_sd_man2;
extern const char *game_str_sd_class;
extern const char *game_str_sd_speed;
extern const char *game_str_sd_max;
extern const char *game_str_sd_weapname;
extern const char *game_str_sd_descr;
extern const char *game_str_sd_dmg;
extern const char *game_str_sd_weaps;
extern const char *game_str_sd_specname;
extern const char *game_str_sd_specs;
extern const char *game_str_sp_only6;
extern const char *game_str_sp_wantscrap;
extern const char *game_str_sp_before;
extern const char *game_str_sp_cost;
extern const char *game_str_fl_station;
extern const char *game_str_fl_inorbit;
extern const char *game_str_fl_moving;
extern const char *game_str_fl_unknown;
extern const char *game_str_fl_system;
extern const char *game_str_gm_tchar;
extern const char *game_str_tbl_gm_spec[PLANET_SPECIAL_NUM];
extern const char *game_str_gm_unable;
extern const char *game_str_gm_prod;
extern const char *game_str_gm_tech;
extern const char *game_str_gm_1_3;
extern const char *game_str_gm_1_2;
extern const char *game_str_gm_2x;
extern const char *game_str_gm_3x;
extern const char *game_str_gm_4x;
extern const char *game_str_gm_prodb1;
extern const char *game_str_gm_prodb2;
extern const char *game_str_gm_prodb3;
extern const char *game_str_gm_gmap;
extern const char *game_str_gm_mapkey;
extern const char *game_str_bs_line1;
extern const char *game_str_bs_line2;
extern const char *game_str_bs_base;
extern const char *game_str_bs_bases;
extern const char *game_str_gv_target;
extern const char *game_str_gv_adjust;
extern const char *game_str_gv_resta;
extern const char *game_str_gv_thispl;
extern const char *game_str_gv_rest;
extern const char *game_str_tbl_gv_rest[3];
extern const char *game_str_gv_reserve;
extern const char *game_str_tbl_gv_reserve[3];
extern const char *game_str_gv_allpl;
extern const char *game_str_gv_starg;
extern const char *game_str_gv_ecom;
extern const char *game_str_tbl_gv_ecom[GOVERNOR_ECO_MODE_NUM];
extern const char *game_str_gv_buildup;
extern const char *game_str_tbl_gv_buildup[3];
extern const char *game_str_tbl_te_field[TECH_FIELD_NUM];
extern const char *game_str_te_adv;
extern const char *game_str_te_tech;
extern const char *game_str_te_techno;
extern const char *game_str_te_techno2;
extern const char *game_str_te_genimp;
extern const char *game_str_te_nmis;
extern const char *game_str_te_nbomb;
extern const char *game_str_te_scrange;
extern const char *game_str_te_rctrl;
extern const char *game_str_te_col;
extern const char *game_str_te_fwaste;
extern const char *game_str_te_gcombat;
extern const char *game_str_te_tform;
extern const char *game_str_te_wasteel;
extern const char *game_str_te_shrange;
extern const char *game_str_te_max;
extern const char *game_str_te_rp;
extern const char *game_str_nt_achieve;
extern const char *game_str_nt_break;
extern const char *game_str_nt_infil;
extern const char *game_str_nt_ruins;
extern const char *game_str_nt_discover;
extern const char *game_str_nt_orion;
extern const char *game_str_nt_scouts;
extern const char *game_str_nt_choose;
extern const char *game_str_nt_reveal;
extern const char *game_str_nt_secrets;
extern const char *game_str_nt_frame;
extern const char *game_str_nt_victim;
extern const char *game_str_nt_doyou;
extern const char *game_str_nt_inc;
extern const char *game_str_nt_redueco;
extern const char *game_str_nt_ind;
extern const char *game_str_nt_ecoall;
extern const char *game_str_nt_terra;
extern const char *game_str_nt_def;
extern const char *game_str_nt_ecostd;
extern const char *game_str_nt_ecohost;
extern const char *game_str_tbl_nt_adj[4];
extern const char *game_str_ra_nocont;
extern const char *game_str_ra_notpres;
extern const char *game_str_ra_secline1;
extern const char *game_str_ra_secline2;
extern const char *game_str_ra_alloc;
extern const char *game_str_ra_planres;
extern const char *game_str_ra_diplo;
extern const char *game_str_ra_gone;
extern const char *game_str_ra_nospies;
extern const char *game_str_ra_spy;
extern const char *game_str_ra_spies;
extern const char *game_str_tbl_ra_treaty[TREATY_NUM];
extern const char *game_str_ra_trade;
extern const char *game_str_ra_notrade;
extern const char *game_str_tbl_ra_relat[17];
extern const char *game_str_ra_stats;
extern const char *game_str_re_reportis;
extern const char *game_str_re_current;
extern const char *game_str_re_yearsold;
extern const char *game_str_re_alliance;
extern const char *game_str_re_wars;
extern const char *game_str_re_environ;
extern const char *game_str_sc_caught;
extern const char *game_str_bp_scombat;
extern const char *game_str_bp_attack;
extern const char *game_str_bp_attacks;
extern const char *game_str_bp_won;
extern const char *game_str_bt_auto_move;
extern const char *game_str_bt_pop;
extern const char *game_str_bt_ind;
extern const char *game_str_bt_bases;
extern const char *game_str_bt_subint;
extern const char *game_str_bt_launch;
extern const char *game_str_bt_coldest;
extern const char *game_str_es_youresp1;
extern const char *game_str_es_youresp2;
extern const char *game_str_es_youresp3;
extern const char *game_str_es_thesp1;
extern const char *game_str_es_thesp2;
extern const char *game_str_es_unkn;
extern const char *game_str_sb_choose;
extern const char *game_str_sb_lastrep;
extern const char *game_str_sb_pop;
extern const char *game_str_sb_fact;
extern const char *game_str_sb_bases;
extern const char *game_str_sb_unkn;
extern const char *game_str_sb_your;
extern const char *game_str_sb_spies;
extern const char *game_str_sb_increv;
extern const char *game_str_sb_inc1;
extern const char *game_str_sb_inc2;
extern const char *game_str_sb_destr;
extern const char *game_str_sb_fact2;
extern const char *game_str_sb_facts;
extern const char *game_str_sb_mbase;
extern const char *game_str_sb_mbases;
extern const char *game_str_sb_failed;
extern const char *game_str_sb_nofact;
extern const char *game_str_sb_nobases;
extern const char *game_str_sb_noinc;
extern const char *game_str_sb_frame;
extern const char *game_str_ex_planeta;
extern const char *game_str_ex_scanner;
extern const char *game_str_ex_scout;
extern const char *game_str_ex_explore;
extern const char *game_str_ex_starsys;
extern const char *game_str_ex_build;
extern const char *game_str_ex_colony;
extern const char *game_str_ex_popgr;
extern const char *game_str_ex_resopnt;
extern const char *game_str_ex_fromind;
extern const char *game_str_ex_techpnt;
extern const char *game_str_ex_fromres;
extern const char *game_str_ex_aredbl;
extern const char *game_str_ex_arequad;
extern const char *game_str_ex_pg1[3];
extern const char *game_str_ex_pg2[3];
extern const char *game_str_ex_pg3[3];
extern const char *game_str_ex_ps1[5];
extern const char *game_str_ex_ps2[4];
extern const char *game_str_la_colony;
extern const char *game_str_la_inyear;
extern const char *game_str_la_the;
extern const char *game_str_la_formnew;
extern const char *game_str_gr_carmor;
extern const char *game_str_gr_outof;
extern const char *game_str_gr_transs;
extern const char *game_str_gr_reclaim;
extern const char *game_str_gr_penetr;
extern const char *game_str_gr_defenss;
extern const char *game_str_gr_troops;
extern const char *game_str_gr_rebel;
extern const char *game_str_gr_gcon;
extern const char *game_str_gr_scapt;
extern const char *game_str_gr_itroops;
extern const char *game_str_gr_succd;
extern const char *game_str_gr_fcapt;
extern const char *game_str_gr_tsteal;
extern const char *game_str_gr_tnew;
extern const char *game_str_el_no;
extern const char *game_str_el_vote;
extern const char *game_str_el_votes;
extern const char *game_str_el_total;
extern const char *game_str_el_start;
extern const char *game_str_el_emperor;
extern const char *game_str_el_ofthe;
extern const char *game_str_el_and;
extern const char *game_str_el_for;
extern const char *game_str_el_nomin;
extern const char *game_str_el_abs1;
extern const char *game_str_el_abs2;
extern const char *game_str_el_dots;
extern const char *game_str_el_your;
extern const char *game_str_el_bull;
extern const char *game_str_el_self;
extern const char *game_str_el_abs;
extern const char *game_str_el_chose1;
extern const char *game_str_el_chose2;
extern const char *game_str_el_chose3;
extern const char *game_str_el_neither;
extern const char *game_str_el_accept;
extern const char *game_str_el_yes;
extern const char *game_str_el_no2;
extern const char *game_str_el_sobeit;
extern const char *game_str_el_isnow;
extern const char *game_str_au_facts;
extern const char *game_str_au_bases;
extern const char *game_str_au_treaty;
extern const char *game_str_au_allian;
extern const char *game_str_au_nonagg;
extern const char *game_str_au_tradea;
extern const char *game_str_au_amreca;
extern const char *game_str_au_tech;
extern const char *game_str_au_framed;
extern const char *game_str_au_bull;
extern const char *game_str_au_inxchng;
extern const char *game_str_au_whatif1;
extern const char *game_str_au_whatif2;
extern const char *game_str_au_perrec1;
extern const char *game_str_au_ques;
extern const char *game_str_au_howmay;
extern const char *game_str_au_youprte;
extern const char *game_str_au_youprta;
extern const char *game_str_au_youract;
extern const char *game_str_au_whatech;
extern const char *game_str_au_whatrad;
extern const char *game_str_au_whatoff;
extern const char *game_str_au_perthr1;
extern const char *game_str_au_perthr2;
extern const char *game_str_au_alsoof1;
extern const char *game_str_au_alsoof2;
extern const char *game_str_au_whowar;
extern const char *game_str_au_whobrk;
extern const char *game_str_au_bcpery;
extern const char *game_str_au_whattr;
extern const char *game_str_au_techn;
extern const char *game_str_au_nextp;
extern const char *game_str_au_back;
extern const char *game_str_au_opts_main[6];
extern const char *game_str_au_opts_treaty[6];
extern const char *game_str_au_opts_agree[2];
extern const char *game_str_au_opts_accept[2];
extern const char *game_str_au_opts_threaten[5];
extern const char *game_str_au_optsmp1[4];
extern const char *game_str_tr_cont1;
extern const char *game_str_tr_cont2;
extern const char *game_str_tr_fuel1;
extern const char *game_str_tr_fuel2;
extern const char *game_str_sv_envir;
extern const char *game_str_sv_stargt;
extern const char *game_str_sv_shild1;
extern const char *game_str_sv_shild2;
extern const char *game_str_sv_psize;
extern const char *game_str_sv_fact;
extern const char *game_str_sv_waste;
extern const char *game_str_sv_pop;
extern const char *game_str_sv_growth;
extern const char *game_str_sv_techp;
extern const char *game_str_sv_resp;
extern const char *game_str_sv_1_3x;
extern const char *game_str_sv_1_2x;
extern const char *game_str_sv_2x;
extern const char *game_str_sv_3x;
extern const char *game_str_sv_4x;
extern const char *game_str_sv_popgr;
extern const char *game_str_sv_pg1[3];
extern const char *game_str_sv_pg2[3];
extern const char *game_str_in_loading;
extern const char *game_str_wl_won_1;
extern const char *game_str_wl_won_2;
extern const char *game_str_wl_won_3;
extern const char *game_str_wl_3_good_1;
extern const char *game_str_wl_3_good_2;
extern const char *game_str_wl_3_tyrant_1;
extern const char *game_str_wl_3_tyrant_2;
extern const char *game_str_wl_3_tyrant_3;
extern const char *game_str_wl_3_tyrant_4;
extern const char *game_str_wl_exile_1;
extern const char *game_str_wl_exile_2;
extern const char *game_str_wl_exile_3;
extern const char *game_str_wl_exile_4;
extern const char *game_str_gnn_end_good;
extern const char *game_str_gnn_end_tyrant;
extern const char *game_str_gnn_also;
extern const char *game_str_mf_title;
extern const char *game_str_tbl_mf[FINISHED_NUM];
#define XTRAMENU_NUM    10
extern const char *game_str_tbl_xtramenu[XTRAMENU_NUM];

#endif
