dewford_wilds_2_MapScripts::
	.byte 0

Dewford_wild2_eventscript_Painter::
	msgbox Dewfordwilds2_Text_Painter, MSGBOX_NPC
	end

Dewfordwilds2_Text_Painter:
	.string "The scenery from those shores\n"
	.string "is exquisite! I wonder what I\p"
	.string "could see from the mountains!$"

Dewford_wilds2_EventScript_Frank::
	trainerbattle_single TRAINER_FRANK, Dewford_Wilds_Text_FrankIntro, Dewford_Wilds_Text_FrankDefeat
	msgbox Dewford_Wilds_Text_FrankPostBattle, MSGBOX_AUTOCLOSE
	end





