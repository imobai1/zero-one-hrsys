<template>
  <echarts :options="pieChartOptions" />
  <echarts :options="lineChartOption" />
  <echarts :options="circularChartOptions" />

</template>

<script>
export default {

  data () {
    return {
      pieChartOptions: {
        title: {
          text: '学历分布'
        },
        tooltip: {},
        legend: {
          data: ['博士', '硕士', '本科', '大专', '中专及以下']
        },
        series: [{
          name: '学历分布',
          type: 'pie',
          data: [
            { value: 48, name: '博士' },
            { value: 12, name: '硕士' },
            { value: 28, name: '本科' },
            { value: 8, name: '大专' },
            { value: 4, name: '中专及以下' },
          ],
        }]
      },
      circularChartOptions: {
        title: {
          text: '机关与项目人员',
        },
        series: [
          {
            type: 'pie',
            data: [
              {
                value: 13,
                name: '地区机关'
              },
              {
                value: 10,
                name: '二级单位'
              },
              {
                value: 1,
                name: '局机关'
              },
              {
                value: 1,
                name: '项目人员'
              }
            ],
            radius: ['40%', '70%']
          }
        ]
      },
      lineChartOption: {
        title: {
          text: '职称分布'
        },
        xAxis: {
          data: ['正高级', '高级', '中级', '初级',]
        },
        yAxis: {},
        series: [
          {
            type: 'bar',
            data: [1, 18, 7, 0,]
          }
        ]
      }
    }
  }
};
</script>
