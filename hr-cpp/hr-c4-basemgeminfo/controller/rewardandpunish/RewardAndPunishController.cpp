#include "stdafx.h"
#include "RewardAndPunishController.h"

StringJsonVO::Wrapper RewardAndPunishController::execQueryTest(const PageQuery::Wrapper& query)
{
	auto vo = StringJsonVO::createShared();
	vo->success("RewardAndPunish Query Success");
	return vo;
}
