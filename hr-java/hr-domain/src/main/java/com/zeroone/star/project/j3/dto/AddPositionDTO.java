package com.zeroone.star.project.j3.dto;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import lombok.Data;

/**
 * <p>
 * 描述：新增职务DTO
 * </p>
 * <p>版权：&copy;tomcatcc </p>
 * <p>地址：</p>
 * @Author tomcatcc
  * @version 1.0.0
 */
@Data
@ApiModel("新增职务")
public class AddPositionDTO {

    @ApiModelProperty(value = "编号" ,example = "10")
    private String SerialNumber;
    @ApiModelProperty(value = "职务编码" ,example = "f429")
    private String JobNumber;
    @ApiModelProperty(value = "职务名称" ,example = "部门经理")
    private String JobTitle;
    @ApiModelProperty(value = "更新人" ,example = "tomcatcc")
    private String UpdatedMan;
    @ApiModelProperty(value = "更新时间" ,example = "2023-04-22 00:01:47")
    private String UpdateTime;
}
