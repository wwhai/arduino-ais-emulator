<!--
 Copyright (C) 2024 wwhai

 This program is free software: you can redistribute it and/or modify
 it under the terms of the GNU Affero General Public License as
 published by the Free Software Foundation, either version 3 of the
 License, or (at your option) any later version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU Affero General Public License for more details.

 You should have received a copy of the GNU Affero General Public License
 along with this program.  If not, see <http://www.gnu.org/licenses/>.
-->

# AIS 模拟器
这个代码用来模拟真实AIS接收器，串口会收到数据，然后可以在上层进行分析.
## 编译
```sh
pio run -e uno -t upload --upload-port COM?
```
## 测试数据
GRMC（Global Recommended Minimum Navigation Information）是NMEA 0183协议中的一种消息类型，用于传输GPS接收器的基本定位信息。下面是一个GRMC消息的示例：

```
$GPRMC,123519,A,4807.038,N,01131.000,E,022.4,084.4,230394,003.1,W*6A
```

这个消息包含了以下信息：

- `$GPRMC`: 消息的开始标识符，表明这是一个GPRMC消息。
- `123519`: UTC时间，格式为时分秒（12:35:19）。
- `A`: 定位状态，A表示定位正常，V表示无效定位。
- `4807.038,N`: 纬度信息，48度07.038分钟，北纬。
- `01131.000,E`: 经度信息，11度31.000分钟，东经。
- `022.4`: 地面速度，单位是节。
- `084.4`: 地面航向，单位是度。
- `230394`: UTC日期，格式为日月年（23rd of March, 1994）。
- `003.1,W`: 磁偏角和方向，这个例子中是3.1度西。
- `*6A`: 校验值，用于验证消息的完整性。

请注意，实际的GRMC消息可能包含更多的字段，具体取决于GPS接收器的型号和配置。上面的示例提供了一个基本的了解。