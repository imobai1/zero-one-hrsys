#ifndef __CONTRACTPAGEVO__
#define __CONTRACTPAGEVO__

#include "../../GlobalInclude.h"
#include "../../dto/ContractDTO/ContractDTO.h"

#include OATPP_CODEGEN_BEGIN(DTO)

//��ͬ��ϢJsonVo
class ContractJsonVO : public JsonVO<ContractDTO::Wrapper>
{
	DTO_INIT(ContractJsonVO, JsonVO<ContractDTO::Wrapper>);
};

//��ͬ����·��JsonVo
class PathJsonVO : public JsonVO<PathDTO::Wrapper>
{
	DTO_INIT(PathJsonVO, JsonVO<PathDTO::Wrapper>);

};



#include OATPP_CODEGEN_END(DTO)

#endif 