NewMap4_MapScripts::
	.byte 0


Mystral_Lake_EventScript_AquaGruntGetCreeps::
	msgbox Mystral_Lake_Text_GruntShivers, MSGBOX_NPC
	closemessage 
	delay 10
	msgbox Mystral_Lake_Text_AquaGruntGetCreeps, MSGBOX_NPC
	end

Mystral_Lake_Text_GruntShivers:
	.string "The Grunt is visibly shivering.$"

Mystral_Lake_Text_AquaGruntGetCreeps:
	.string "This place gives me the creeps!\p"
	.string "The air feels like it penetrates even\n"
	.string "your very bones.$"
