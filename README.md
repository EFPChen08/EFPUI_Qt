# EFPUI Qt
![Static Badge](https://img.shields.io/badge/Platform-_Qt-Green)
![Static Badge](https://img.shields.io/badge/Language-_C%2B%2B-blue)
![Static Badge](https://img.shields.io/badge/Developer-_EFPChen-orange)

## 特点

- **全暗黑风格**: 整体UI采用暗黑风格设计，十分养眼
- **蓝色辅助**: 选择框单选框以及辅助色采用深蓝色，与黑色十分搭配，很酷
- **Qt编写**: 使用Qt6，几乎完美适配任何Qt程序

## 快速开始

项目的引用代码

```C
ui->setupUi(this);

QFile file(":/DarkTheme.qss");

if (file.open(QFile::ReadOnly | QFile::Text)) {
    QTextStream ts(&file);
    qApp->setStyleSheet(ts.readAll());
}
```

### 目前已经适配

| 组件 | 状态 | 说明 |
|------|------|------|
| 基本组件 | 半数进度 | 本项目基本组件完成度达到50% |

**最后，感谢您使用EFPUI**