
/* generated by hcc, do not modify */

typedef struct
{	int	pad[28];
	int	self;
	int	other;
	int	world;
	float	time;
	float	frametime;
	int	newmis;
	float	force_retouch;
	string_t	mapname;
	string_t	startspot;
	float	deathmatch;
	float	randomclass;
	float	damageScale;
	float	meleeDamScale;
	float	shyRespawn;
	float	spartanPrint;
	float	manaScale;
	float	tomeMode;
	float	tomeRespawn;
	float	w2Respawn;
	float	altRespawn;
	float	fixedLevel;
	float	autoItems;
	float	dmMode;
	float	easyFourth;
	float	patternRunner;
	float	coop;
	float	teamplay;
	float	serverflags;
	float	total_secrets;
	float	total_monsters;
	float	found_secrets;
	float	killed_monsters;
	float	chunk_cnt;
	float	done_precache;
	float	parm1;
	float	parm2;
	float	parm4;
	float	parm5;
	float	parm6;
	float	parm7;
	float	parm8;
	float	parm9;
	float	parm10;
	float	parm11;
	float	parm12;
	float	parm13;
	float	parm14;
	float	parm15;
	float	parm16;
	string_t	parm3;
	vec3_t	v_forward;
	vec3_t	v_up;
	vec3_t	v_right;
	float	trace_allsolid;
	float	trace_startsolid;
	float	trace_fraction;
	vec3_t	trace_endpos;
	vec3_t	trace_plane_normal;
	float	trace_plane_dist;
	int	trace_ent;
	float	trace_inopen;
	float	trace_inwater;
	int	msg_entity;
	float	cycle_wrapped;
	float	crouch_cnt;
	float	modelindex_assassin;
	float	modelindex_crusader;
	float	modelindex_paladin;
	float	modelindex_necromancer;
	float	modelindex_sheep;
	float	num_players;
	float	exp_mult;
	float	max_players;
	float	defLosses;
	float	attLosses;
	func_t	main;
	func_t	StartFrame;
	func_t	PlayerPreThink;
	func_t	PlayerPostThink;
	func_t	ClientKill;
	func_t	ClientConnect;
	func_t	PutClientInServer;
	func_t	ClientReEnter;
	func_t	ClientDisconnect;
	func_t	ClassChangeWeapon;
	func_t	SetNewParms;
	func_t	SetChangeParms;
	func_t	SmitePlayer;
} globalvars_t;

typedef struct
{
	float	modelindex;
	vec3_t	absmin;
	vec3_t	absmax;
	float	ltime;
	float	lastruntime;
	float	movetype;
	float	solid;
	vec3_t	origin;
	vec3_t	oldorigin;
	vec3_t	velocity;
	vec3_t	angles;
	vec3_t	avelocity;
	vec3_t	punchangle;
	string_t	classname;
	string_t	model;
	float	frame;
	float	skin;
	float	effects;
	float	scale;
	float	drawflags;
	float	abslight;
	vec3_t	mins;
	vec3_t	maxs;
	vec3_t	size;
	float	hull;
	func_t	touch;
	func_t	use;
	func_t	think;
	func_t	blocked;
	float	nextthink;
	int	groundentity;
	float	stats_restored;
	float	frags;
	float	weapon;
	string_t	weaponmodel;
	float	weaponframe;
	float	health;
	float	max_health;
	float	playerclass;
	float	next_playerclass;
	float	has_portals;
	float	bluemana;
	float	greenmana;
	float	max_mana;
	float	armor_amulet;
	float	armor_bracer;
	float	armor_breastplate;
	float	armor_helmet;
	float	level;
	float	intelligence;
	float	wisdom;
	float	dexterity;
	float	strength;
	float	experience;
	float	ring_flight;
	float	ring_water;
	float	ring_turning;
	float	ring_regeneration;
	float	haste_time;
	float	tome_time;
	string_t	puzzle_inv1;
	string_t	puzzle_inv2;
	string_t	puzzle_inv3;
	string_t	puzzle_inv4;
	string_t	puzzle_inv5;
	string_t	puzzle_inv6;
	string_t	puzzle_inv7;
	string_t	puzzle_inv8;
	float	experience_value;
	float	items;
	float	takedamage;
	int	chain;
	float	deadflag;
	vec3_t	view_ofs;
	float	button0;
	float	button1;
	float	button2;
	float	impulse;
	float	fixangle;
	vec3_t	v_angle;
	float	idealpitch;
	float	idealroll;
	float	hoverz;
	string_t	netname;
	int	enemy;
	float	flags;
	float	flags2;
	float	artifact_flags;
	float	colormap;
	float	team;
	float	light_level;
	float	wpn_sound;
	float	targAng;
	float	targPitch;
	float	targDist;
	float	teleport_time;
	float	armortype;
	float	armorvalue;
	float	waterlevel;
	float	watertype;
	float	friction;
	float	ideal_yaw;
	float	yaw_speed;
	int	goalentity;
	float	spawnflags;
	string_t	target;
	string_t	targetname;
	float	dmg_take;
	float	dmg_save;
	int	dmg_inflictor;
	int	owner;
	vec3_t	movedir;
	float	message;
	float	soundtype;
	string_t	noise;
	string_t	noise1;
	string_t	noise2;
	string_t	noise3;
	float	rings;
	float	rings_active;
	float	rings_low;
	float	artifacts;
	float	artifact_active;
	float	artifact_low;
	float	hasted;
	float	inventory;
	float	cnt_torch;
	float	cnt_h_boost;
	float	cnt_sh_boost;
	float	cnt_mana_boost;
	float	cnt_teleport;
	float	cnt_tome;
	float	cnt_summon;
	float	cnt_invisibility;
	float	cnt_glyph;
	float	cnt_haste;
	float	cnt_blast;
	float	cnt_polymorph;
	float	cnt_flight;
	float	cnt_cubeofforce;
	float	cnt_invincibility;
	int	cameramode;
	int	movechain;
	func_t	chainmoved;
	float	string_index;
	float	gravity;
	float	siege_team;
} entvars_t;

#define PROGHEADER_CRC 25203