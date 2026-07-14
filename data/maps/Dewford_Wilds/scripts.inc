Dewford_Wilds_MapScripts::
	.byte 0

Dewford_Wilds_Eventscript_TheseFacilities::
	msgbox Dewfordwilds_Text_TheseFacilities, MSGBOX_NPC
	end


Dewfordwilds_Text_TheseFacilities:
	.string "These facilities pump sea water.\n"
	.string "and turn it into pure water.\p"
	.string "They provide the entirety of\n"
	.string "Dewford with drinkable water.$"

Dewford_Wilds_Eventscript_ROSEMARY::
	trainerbattle_single TRAINER_ROSEMARY, Dewford_Wilds_Text_RosemaryIntro, Dewford_Wilds_Text_RosemaryDefeat
	msgbox Dewford_Wilds_Text_RosemaryPostBattle, MSGBOX_AUTOCLOSE
	end

Dewford_Wilds_Eventscript_ClobbopusAlert::
	msgbox Dewford_Wilds_Text_ClobbopusAlert, MSGBOX_SIGN
	end

Dewford_Wilds_Text_ClobbopusAlert:
	.string "Attention tourists.\p"
	.string "Local Clobbopus may not\n"
	.string "evolve, but they're bigger\p"
	.string "and can pose a real danger.$"

Dewford_City_EventScript_Recuillement::
	msgbox Dewford_Wilds_Text_Recueillement, MSGBOX_SIGN
	end

Dewford_Wilds_Text_Recueillement:
	.string "In loving memory,\n"
	.string "of those gone too soon.$"


Dewford_Wilds_Eventscript_Theodores::
	trainerbattle_single TRAINER_THEODORES, Dewford_Wilds_Text_THEODORESIntro, Dewford_Wilds_Text_THEODORESDefeat
	msgbox Dewford_Wilds_Text_THEODORESPostBattle, MSGBOX_AUTOCLOSE
	end

