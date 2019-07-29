#ifndef consts_h
	#define consts_h

	// shortcuts
	#define SHORTCUT_PLAY_BUTTON 0
	#define SHORTCUT_UP_NEXT_BUTTON 1
	#define SHORTCUT_DOWN_PREVIOUS_BUTTON 2
	#define SHORTCUT_STARTUP 3

	// folder play modes
	#define MODE_DEFAULT 0
	#define MODE_AUDIO_DRAMA 1
	#define MODE_ALBUM 2
	#define MODE_PARTY 3
	#define MODE_SINGLE_TRACK 4
	#define MODE_AUDIO_BOOK 5
	#define MODE_ADMIN 6
	#define MODE_SPECIAL_AUDIO_BOOK 7
	#define MODE_SPECIAL_ALBUM 8
	#define MODE_SPECIAL_PARTY 9

	// modifier settings modes
	#define MODIFIER_ADMIN_MENU 255
	#define MODIFIER_DEFAULT 0
	#define MODIFIER_SLEEP_TIMER 1
	#define MODIFIER_FREEZE_DANCE 2
	#define MODIFIER_LOCKED 3
	#define MODIFIER_TODDLER 4
	#define MODIFIER_DAYCARE 5
	#define MODIFIER_REPEATE_SINGLE 6

	// lock modes
	#define ADMIN_LOCK_MODE_CARD 1
	#define ADMIN_LOCK_MODE_PIN 2
	#define ADMIN_LOCK_MODE_MATH 3

	// menus
	#define MENU_SUB_EXIT 0
	#define MENU_SUB_RESET_CARD 1
	#define MENU_SUB_MAX_VOLUME 2
	#define MENU_SUB_MIN_VOLUME 3
	#define MENU_SUB_INIT_VOLUME 4
	#define MENU_SUB_EQ 5
	#define MENU_SUB_MODIFIER 6
	#define MENU_SUB_SHORTCUT 7
	#define MENU_SUB_STANDBY_TIMER 8
	#define MENU_SUB_CREATE_CARDS_FOR_FOLDER 9

	// advert files
	// 1-255 are numbers only
	#define ADV_LOCKED_SOUND 260
	#define ADV_MODIFIER_REMOVED_SOUND 261
	#define ADV_FREEZE_INTRO 300
	#define ADV_FREEZE_STOP 301
	#define ADV_FREEZE_DONT_MOVE 301
	#define ADV_FREEZE_GO_ON 301
	#define ADV_SLEEP 302
	#define ADV_LOCKED 303
	#define ADV_BUTTONS_LOCKED 304
	#define ADV_DAYCARE_MODE 305

	// mp3 files
	// 1-255 are numbers only
	#define MP3_NEW_TAG 300
	#define MP3_SELECT_FOLDER 301
	#define MP3_SELECT_MODE 310
	#define MP3_MODE_RANDOM_EPISODE 311
	#define MP3_MODE_ALBUM 312
	#define MP3_MODE_PARTY 313
	#define MP3_MODE_SINGLE_TRACK 314
	#define MP3_MODE_AUDIO_BOOK 315
	#define MP3_ADMIN 316
	#define MP3_SPECIAL_RANDOM 317
	#define MP3_SPECIAL_ALBUM 318
	#define MP3_SPECIAL_PARTY 319
	#define MP3_SELECT_FILE 320
	#define MP3_SELECT_FIRST_FILE 321
	#define MP3_SELECT_LAST_FILE 322
	#define MP3_ANNOUNCE_NUMBER_BEFORE 330
	#define MP3_ANNOUNCE_NUMBER_NO 331
	#define MP3_ANNOUNCE_NUMBER_YES 332
	#define MP3_CARD_CONFIGURED 400
	#define MP3_ERROR 401
	#define MP3_WAITING_FOR_CARD 800
	#define MP3_RESET_ABORTED 802
	#define MP3_ADMIN_INTRO 900
	#define MP3_CARD_RESET 901
	#define MP3_CONFIGURE_MAX_VOLUME 902
	#define MP3_CONFIGURE_MIN_VOLUME 903
	#define MP3_CONFIGURE_INIT_VOLUME 904
	#define MP3_CONFIGURE_EQ 905
	#define MP3_CONFIGURE_MODIFIERS 906
	#define MP3_CONFIGURE_SHORTCUT 907
	#define MP3_CONFIGURE_STANDBY_TIMER 908
	#define MP3_CREATE_BATCH_CARDS 909
	#define MP3_SWITCH_VOLUME_BUTTONS 910
	#define MP3_RESET 911
	#define MP3_LOCK_ADMIN 912
	#define MP3_EQ_INTRO 920
	#define MP3_EQ_NORMAL 921
	#define MP3_EQ_POP 922
	#define MP3_EQ_ROCK 923
	#define MP3_EQ_JAZZ 924
	#define MP3_EQ_CLASSIC 925
	#define MP3_EQ_BASS 926
	#define MP3_CONFIGURE_MAX_VOLUME_INTRO 930
	#define MP3_CONFIGURE_MIN_VOLUME_INTRO 931
	#define MP3_CONFIGURE_INIT_VOLUME_INTRO 932
	#define MP3_CONFIGURE_SWITCH_VOLUME_BUTTONS_INTRO 933
	#define MP3_NO 934
	#define MP3_YES 935
	#define MP3_CONFIGURE_BATCH_CARDS_INTRO 936
	#define MP3_CONFIGURE_SHORTCUT_INTRO 940
	#define MP3_PAUSE_BUTTON 941
	#define MP3_UP_NEXT_BUTTON 942
	#define MP3_DOWN_PREVIOUS_BUTTON 943
	#define MP3_CONFIGURE_STARTUP_SHORTCUT 944
	#define MP3_CONFIGURE_TIMER_INTRO 960
	#define MP3_CONFIGURE_TIMER_5 961
	#define MP3_CONFIGURE_TIMER_15 962
	#define MP3_CONFIGURE_TIMER_30 963
	#define MP3_CONFIGURE_TIMER_60 964
	#define MP3_CONFIGURE_TIMER_DISABLED 965
	#define MP3_CONFIGURE_MODIFIER_INTRO 970
	#define MP3_CONFIGURE_MODIFIER_SLEEP_TIMER 971
	#define MP3_CONFIGURE_MODIFIER_FREEZE_DANCE 972
	#define MP3_CONFIGURE_MODIFIER_LOCKED 973
	#define MP3_CONFIGURE_MODIFIER_TODDLER 974
	#define MP3_CONFIGURE_MODIFIER_DAYCARE 975
	#define MP3_CONFIGURE_MODIFIER_REPEAT_SINGLE 976
	#define MP3_CONFIGURE_ADMIN_LOCK_INTRO 980
	#define MP3_CONFIGURE_ADMIN_LOCK_DISABLED 981
	#define MP3_CONFIGURE_ADMIN_LOCK_CARD 982
	#define MP3_CONFIGURE_ADMIN_LOCK_PIN 983
	#define MP3_CONFIGURE_ADMIN_LOCK_CALC 984
	#define MP3_ADMIN_ENTER_PIN 991
	#define MP3_ADMIN_CALC_QUESTION 992
	#define MP3_ADMIN_CALC_PLUS 993
	#define MP3_ADMIN_CALC_MINUS 994
	#define MP3_RESET_OK 999
#endif
