#pragma once

#define SCREEN_WIDTH 768
#define SCREEN_HEIGHT 1024

#define SPLASH_STATE_SHOW_TIME 3.0

#define SPLASH_SCENE_BACKGROUND_FILEPATH "Resources/res/bg.png"
#define MAIN_MENU_BACKGROUND_FILEPATH "Resources/res/ceiling.png"

#define GAME_BACKGROUND_FILEPATH "Resources/res/sky.png"
#define GAME_OVER_BACKGROUND_FILEPATH "Resources/res/sky.png"

#define GAME_TITLE_FILEPATH "Resources/res/title.png"
#define PLAY_BUTTON_FILEPATH "Resources/res/playButton.png"

#define PIPE_UP_FILEPATH "Resources/res/spike.png"
#define PIPE_DOWN_FILEPATH "Resources/res/chain.png"
#define SCORING_PIPE_FILEPATH "Resources/res/chain.png"

#define LAND_FILEPATH "Resources/res/ground.png"

#define BAT_FRAME_1_FILEPATH "Resources/res/BAT1.png"
#define BAT_FRAME_2_FILEPATH "Resources/res/BAT2.png"
#define BAT_FRAME_3_FILEPATH "Resources/res/BAT3.png"
#define BAT_FRAME_4_FILEPATH "Resources/res/BAT2.png"
#define BATTY_FONT_FILEPATH "Resources/font/TheWildBreathOfZelda-15Lv.tff"
#define GAME_OVER_TITLE_FILEPATH "Resources/res/GameOver.png"
#define GAME_OVER_BODY_FILEPATH "Resources/res/GameOverBody.png"

#define BRONZE_MEDAL_FILEPATH "Resources/res/bronzeMedal.png"
#define SILVER_MEDAL_FILEPATH "Resources/res/silverMedal.png"
#define GOLD_MEDAL_FILEPATH "Resources/res/goldMedal.png"
#define PLATINUM_MEDAL_FILEPATH "Resources/res/platinumMedal.png"


#define PIPE_MOVEMENT_SPEED 200.0f
#define PIPE_SPAWN_FREQUENCY 0.5f
#define BAT_ANIMATION_DURATION 0.5f

#define BAT_STATE_STILL 1
#define BAT_STATE_FALLING 2
#define BAT_STATE_FLYING 3

#define GRAVITY 350.0f
#define FLYING_SPEED 350.0f

#define FLYING_DURATION 0.25f

#define ROTATION_SPEED 100.0f

enum GameStates
{
	eReady,
	ePlaying,
	eGameOver
};

#define FLASH_SPEED 1500.0f
#define TIME_BEFOREGAMEOVER_APPEARS 1.5f
#define BRONZE_MEDAL_SCORE 0
#define SILVER_MEDAL_SCORE 5
#define GOLD_MEDAL_SCORE 25
#define PLATINUM_MEDAL_SCORE 100



