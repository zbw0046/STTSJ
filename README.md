# STTSJ

## data preprocessing
### CPPDict.data
用于CPP读取的词典文件

格式：每行一个word："word:wordIdx"

### trajFile.data
存储所有语义轨迹。

格式：每行一个trajectory，其中的采样点用";"隔开，每个采样点后有分号作为结尾。采样点内用逗号隔开。最后以换行符结尾。

例子：

"35.42,116.51,10251151,[15,44,25,48];35.42,116.54,10251212,[15,11,54,8,84,451,12,5];\n"

CPP读取的时候可以首先以分号为界划分成点，再以逗号为界划分出经纬度，最后用[]确定关键词，关键词内以逗号为界。

## Index
使用Grid索引作为基本索引，按照行列方式编号
每个cell采用set存储轨迹编号
