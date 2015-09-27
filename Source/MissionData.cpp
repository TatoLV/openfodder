/*
 *  Cannon Fodder
 *  ------------------------
 *
 *  Copyright (C) 2008-2015 Robert Crossfield
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along
 *  with this program; if not, write to the Free Software Foundation, Inc.,
 *  51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 */
#include "stdafx.hpp"

const std::string mMapTypes[] = {
	"jun",
	"des",
	"ice",
	"mor",
	"int",
	"hid",
	"afx"		// Amiga Format Christmas Special
};

const uint16 mRetail_MissionPhaseTable[] = {	01, 02, 01, 04, 03, 02, 03, 04,
												02, 05, 03, 06, 01, 03, 03, 02,
												01, 05, 01, 04, 01, 04, 05, 06 };

const uint16 mAmigaFormat_MissionPhaseTable[] = { 01, 01 };

const char* mAmigaFormat_MissionNames[] = {
	"LAND OF HOPE AND GLORY",
	"IT'S SNOW TIME!"
};

const char* mRetail_MissionNames[] = {
	"THE SENSIBLE INITIATION",
	"ONWARD VIRGIN SOLDIERS",
	"ANTARCTIC ADVENTURE",
	"SUPER SMASHING NAMTASTIC",
	"THOSE VICIOUS VIKINGS",
	"WESTWARD HO",
	"GREENLAND REDBLOOD",
	"GUERRILLA WARFARE",
	"GREAT SCOTT GOOD SHOT",
	"ONE GIGANTIC DUST BOWL",
	"JUNGLE, MORE JUNGLE",
	"CHILLER THRILLER KILLER",
	"MORE MOORS"
	"BOMB ALLEY",
	"GET ORF MOI LAAND",
	"GOING UNDERGROUND",
	"THE MOOR THE MERRIER",
	"UNDERPANTS ELECTRIC",
	"DIABLO DOWNSTAIRS",
	"MOORS THE PITY",
	"EXPLORE MY HOLE",
	"DESERT DISASTER",
	"MOORS ET MORTEM",
	"BOMB THE BASE",
};

const char* mRetail_MissionPhaseNames[] = {
	"IT'S A JUNGLE OUT THERE",
	"BRIDGE OVER THE RIVER PIE",
	"TRASH ENEMY HQ",
	"BLAST, IT'S COLD",
	"BEACHY HEAD",
	"PIER PRESSURE",
	"VILLAGE PEOPLE",
	"QUICKSAND",
	"THE VALLEY OF ICE",
	"BARMY BAZOOKAS",
	"MY BEAUTIFUL SKIDU",
	"THE GRAND CANYON",
	"TRIGGER HAPPY",
	"THE SLIPPERY STAIRWAY",
	"RETURN TO REYKJAVIK",
	"EVIL KNIEVEL",
	"HAVE A NICE TRIP",
	"BANG BANG YOU'RE DEAD",
	"DELIVERANCE",
	"JEEP JUMP",
	"ROUND THE GARDEN",
	"IN AT THE DEEP END",
	"THE SQUARE DANCE",
	"PENNY FOR THE GUY",
	"TANKY IN THE MIDDLE",
	"IF IT MOVES KILL IT",
	"A GOOD HARD TANK",
	"LORD OF THE FLIES",
	"WHOPPER CHOPPER",
	"DONKEYTASTIC",
	"AN ICICLE MADE FOR TWO",
	"TANK YOU VERY MUCH",
	"DEATH AND GLORY",
	"NORTH FACE OF THE EIGER",
	"RESCUE EL PRESIDENTE",
	"CHILL OUT ICEMAN",
	"MUCH MUCH MOOR",
	"IT'S ALL MINE",
	"SANDY CRACK",
	"AIRLIFT",
	"SHEEP DIP",
	"CHOCS AWAY CHAPPIES",
	"A BRIDGE TOO FAR",
	"ETON RIFLES",
	"SEWERS CANAL",
	"NO WAY IN",
	"TAKE YOUR PARTNERS",
	"THE SCROUNGERS",
	"PLENTY OF ROOM",
	"FRANZ KLAMMER",
	"THE DOORS",
	"LOOK OUT",
	"TANK TOP",
	"TANKTASTIC",
	"THE GREAT ESCAPE",
	"WHOOPEEE",
	"TOO MUCH MAN",
	"ROCKET MAN",
	"RUNNING OUT OF IDEAS",
	"AND THEY'RE OFF",
	"GO FOR IT",
	"SHEEP SHEARER'S DELIGHT",
	"IRELAND RECORDS",
	"GAWD HELP ME",
	"CHOPPER CRAZY",
	"STOP THE PIGEON",
	"SAVE THAT SCUMBAG",
	"ONE MAN THREE CHOPPERS",
	"A WATERY GRAVE",
	"SYSTEM OFF",
	"STICK EM UP COD BREATH",
	"DONKEYDEATHTASTICELASTIC"
};

const char* mMissionGoals[] = {
	"KILL ALL ENEMY",
	"DESTROY ENEMY BUILDINGS",
	"RESCUE HOSTAGES",
	"PROTECT ALL CIVILIANS",
	"KIDNAP ENEMY LEADER",
	"DESTROY FACTORY",
	"DESTROY COMPUTER",
	"GET CIVILIAN HOME"
};

const sMissionData mMissionData_AmigaFormat = {
	mAmigaFormat_MissionNames,
	mAmigaFormat_MissionNames,
	mAmigaFormat_MissionPhaseTable
};

const sMissionData mMissionData_Retail = {
	mRetail_MissionNames,
	mRetail_MissionPhaseNames,
	mRetail_MissionPhaseTable
};