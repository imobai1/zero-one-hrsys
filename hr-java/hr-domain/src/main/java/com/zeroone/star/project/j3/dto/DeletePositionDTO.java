package com.zeroone.star.project.j3.dto;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import lombok.Data;

/**
 * <p>
 * 描述：删除职务DTO
 * </p>
 * <p>版权：&copy;tomcatcc </p>
 * <p>地址：</p>
 * @Author tomcatcc
 * @version 1.0.0
 */

@Data
@ApiModel("删除职务")
public class DeletePositionDTO {

    @ApiModelProperty(value = "职务ID",example = "1")
    private String positionId;
}
