/********************************************************************************
** Form generated from reading UI file 'colorFromScalarDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLORFROMSCALARDLG_H
#define UI_COLORFROMSCALARDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ColorFromScalarDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QRadioButton *toggleRGB;
    QRadioButton *toggleHSV;
    QSpacerItem *horizontalSpacer_4;
    QGroupBox *mRedGroupBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *mRedLabel;
    QSpacerItem *horizontalSpacer;
    QComboBox *channelComboR;
    QLabel *MinLabelR;
    QDoubleSpinBox *minInputSpinBoxR;
    QSpacerItem *horizontalSpacer_5;
    QCheckBox *fixR;
    QCheckBox *reverseR;
    QSpacerItem *horizontalSpacer_6;
    QLabel *MaxLabelR;
    QDoubleSpinBox *maxInputSpinBoxR;
    QFrame *histoFrameR;
    QGroupBox *mGreenGroupBox;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *mGreenLabel;
    QSpacerItem *horizontalSpacer_2;
    QComboBox *channelComboG;
    QLabel *MinLabelG;
    QDoubleSpinBox *minInputSpinBoxG;
    QSpacerItem *horizontalSpacer_10;
    QCheckBox *fixG;
    QCheckBox *reverseG;
    QSpacerItem *horizontalSpacer_8;
    QLabel *MaxLabelG;
    QDoubleSpinBox *maxInputSpinBoxG;
    QFrame *histoFrameG;
    QGroupBox *mBlueGroupBox;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *mBlueLabel;
    QSpacerItem *horizontalSpacer_3;
    QComboBox *channelComboB;
    QLabel *MinLabelB;
    QDoubleSpinBox *minInputSpinBoxB;
    QSpacerItem *horizontalSpacer_7;
    QCheckBox *fixB;
    QCheckBox *reverseB;
    QSpacerItem *horizontalSpacer_9;
    QLabel *MaxLabelB;
    QDoubleSpinBox *maxInputSpinBoxB;
    QFrame *histoFrameB;
    QGroupBox *mAlphaGroupBox;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_7;
    QLabel *mAlphaLabel;
    QSpacerItem *horizontalSpacer_11;
    QComboBox *channelComboA;
    QLabel *MinLabelA;
    QDoubleSpinBox *minInputSpinBoxA;
    QSpacerItem *horizontalSpacer_15;
    QCheckBox *fixA;
    QCheckBox *reverseA;
    QSpacerItem *horizontalSpacer_16;
    QLabel *MaxLabelA;
    QDoubleSpinBox *maxInputSpinBoxA;
    QFrame *histoFrameA;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ColorFromScalarDialog)
    {
        if (ColorFromScalarDialog->objectName().isEmpty())
            ColorFromScalarDialog->setObjectName(QString::fromUtf8("ColorFromScalarDialog"));
        ColorFromScalarDialog->resize(620, 800);
        verticalLayout = new QVBoxLayout(ColorFromScalarDialog);
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(6, 6, 6, 6);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(6, -1, -1, -1);
        label = new QLabel(ColorFromScalarDialog);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        toggleRGB = new QRadioButton(ColorFromScalarDialog);
        toggleRGB->setObjectName(QString::fromUtf8("toggleRGB"));
        toggleRGB->setChecked(true);

        horizontalLayout->addWidget(toggleRGB);

        toggleHSV = new QRadioButton(ColorFromScalarDialog);
        toggleHSV->setObjectName(QString::fromUtf8("toggleHSV"));

        horizontalLayout->addWidget(toggleHSV);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout);

        mRedGroupBox = new QGroupBox(ColorFromScalarDialog);
        mRedGroupBox->setObjectName(QString::fromUtf8("mRedGroupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mRedGroupBox->sizePolicy().hasHeightForWidth());
        mRedGroupBox->setSizePolicy(sizePolicy);
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        mRedGroupBox->setFont(font);
        verticalLayout_2 = new QVBoxLayout(mRedGroupBox);
        verticalLayout_2->setSpacing(3);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(6, 0, 6, 6);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mRedLabel = new QLabel(mRedGroupBox);
        mRedLabel->setObjectName(QString::fromUtf8("mRedLabel"));
        QFont font1;
        font1.setBold(true);
        font1.setUnderline(true);
        font1.setWeight(75);
        mRedLabel->setFont(font1);

        horizontalLayout_2->addWidget(mRedLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        channelComboR = new QComboBox(mRedGroupBox);
        channelComboR->addItem(QString());
        channelComboR->addItem(QString());
        channelComboR->addItem(QString());
        channelComboR->addItem(QString());
        channelComboR->setObjectName(QString::fromUtf8("channelComboR"));

        horizontalLayout_2->addWidget(channelComboR);

        MinLabelR = new QLabel(mRedGroupBox);
        MinLabelR->setObjectName(QString::fromUtf8("MinLabelR"));

        horizontalLayout_2->addWidget(MinLabelR);

        minInputSpinBoxR = new QDoubleSpinBox(mRedGroupBox);
        minInputSpinBoxR->setObjectName(QString::fromUtf8("minInputSpinBoxR"));

        horizontalLayout_2->addWidget(minInputSpinBoxR);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        fixR = new QCheckBox(mRedGroupBox);
        fixR->setObjectName(QString::fromUtf8("fixR"));

        horizontalLayout_2->addWidget(fixR);

        reverseR = new QCheckBox(mRedGroupBox);
        reverseR->setObjectName(QString::fromUtf8("reverseR"));

        horizontalLayout_2->addWidget(reverseR);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        MaxLabelR = new QLabel(mRedGroupBox);
        MaxLabelR->setObjectName(QString::fromUtf8("MaxLabelR"));

        horizontalLayout_2->addWidget(MaxLabelR);

        maxInputSpinBoxR = new QDoubleSpinBox(mRedGroupBox);
        maxInputSpinBoxR->setObjectName(QString::fromUtf8("maxInputSpinBoxR"));

        horizontalLayout_2->addWidget(maxInputSpinBoxR);


        verticalLayout_2->addLayout(horizontalLayout_2);

        histoFrameR = new QFrame(mRedGroupBox);
        histoFrameR->setObjectName(QString::fromUtf8("histoFrameR"));
        sizePolicy.setHeightForWidth(histoFrameR->sizePolicy().hasHeightForWidth());
        histoFrameR->setSizePolicy(sizePolicy);
        histoFrameR->setFrameShape(QFrame::StyledPanel);

        verticalLayout_2->addWidget(histoFrameR);


        verticalLayout->addWidget(mRedGroupBox);

        mGreenGroupBox = new QGroupBox(ColorFromScalarDialog);
        mGreenGroupBox->setObjectName(QString::fromUtf8("mGreenGroupBox"));
        verticalLayout_3 = new QVBoxLayout(mGreenGroupBox);
        verticalLayout_3->setSpacing(3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(6, 0, 6, 6);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        mGreenLabel = new QLabel(mGreenGroupBox);
        mGreenLabel->setObjectName(QString::fromUtf8("mGreenLabel"));
        mGreenLabel->setFont(font1);

        horizontalLayout_4->addWidget(mGreenLabel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        channelComboG = new QComboBox(mGreenGroupBox);
        channelComboG->addItem(QString());
        channelComboG->addItem(QString());
        channelComboG->addItem(QString());
        channelComboG->addItem(QString());
        channelComboG->setObjectName(QString::fromUtf8("channelComboG"));

        horizontalLayout_4->addWidget(channelComboG);

        MinLabelG = new QLabel(mGreenGroupBox);
        MinLabelG->setObjectName(QString::fromUtf8("MinLabelG"));

        horizontalLayout_4->addWidget(MinLabelG);

        minInputSpinBoxG = new QDoubleSpinBox(mGreenGroupBox);
        minInputSpinBoxG->setObjectName(QString::fromUtf8("minInputSpinBoxG"));

        horizontalLayout_4->addWidget(minInputSpinBoxG);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_10);

        fixG = new QCheckBox(mGreenGroupBox);
        fixG->setObjectName(QString::fromUtf8("fixG"));

        horizontalLayout_4->addWidget(fixG);

        reverseG = new QCheckBox(mGreenGroupBox);
        reverseG->setObjectName(QString::fromUtf8("reverseG"));

        horizontalLayout_4->addWidget(reverseG);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);

        MaxLabelG = new QLabel(mGreenGroupBox);
        MaxLabelG->setObjectName(QString::fromUtf8("MaxLabelG"));

        horizontalLayout_4->addWidget(MaxLabelG);

        maxInputSpinBoxG = new QDoubleSpinBox(mGreenGroupBox);
        maxInputSpinBoxG->setObjectName(QString::fromUtf8("maxInputSpinBoxG"));

        horizontalLayout_4->addWidget(maxInputSpinBoxG);


        verticalLayout_3->addLayout(horizontalLayout_4);

        histoFrameG = new QFrame(mGreenGroupBox);
        histoFrameG->setObjectName(QString::fromUtf8("histoFrameG"));
        sizePolicy.setHeightForWidth(histoFrameG->sizePolicy().hasHeightForWidth());
        histoFrameG->setSizePolicy(sizePolicy);
        histoFrameG->setFrameShape(QFrame::StyledPanel);
        histoFrameG->setFrameShadow(QFrame::Raised);

        verticalLayout_3->addWidget(histoFrameG);


        verticalLayout->addWidget(mGreenGroupBox);

        mBlueGroupBox = new QGroupBox(ColorFromScalarDialog);
        mBlueGroupBox->setObjectName(QString::fromUtf8("mBlueGroupBox"));
        verticalLayout_4 = new QVBoxLayout(mBlueGroupBox);
        verticalLayout_4->setSpacing(3);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(6, 0, 6, 6);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        mBlueLabel = new QLabel(mBlueGroupBox);
        mBlueLabel->setObjectName(QString::fromUtf8("mBlueLabel"));
        mBlueLabel->setFont(font1);

        horizontalLayout_5->addWidget(mBlueLabel);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        channelComboB = new QComboBox(mBlueGroupBox);
        channelComboB->addItem(QString());
        channelComboB->addItem(QString());
        channelComboB->addItem(QString());
        channelComboB->addItem(QString());
        channelComboB->setObjectName(QString::fromUtf8("channelComboB"));

        horizontalLayout_5->addWidget(channelComboB);

        MinLabelB = new QLabel(mBlueGroupBox);
        MinLabelB->setObjectName(QString::fromUtf8("MinLabelB"));

        horizontalLayout_5->addWidget(MinLabelB);

        minInputSpinBoxB = new QDoubleSpinBox(mBlueGroupBox);
        minInputSpinBoxB->setObjectName(QString::fromUtf8("minInputSpinBoxB"));

        horizontalLayout_5->addWidget(minInputSpinBoxB);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_7);

        fixB = new QCheckBox(mBlueGroupBox);
        fixB->setObjectName(QString::fromUtf8("fixB"));

        horizontalLayout_5->addWidget(fixB);

        reverseB = new QCheckBox(mBlueGroupBox);
        reverseB->setObjectName(QString::fromUtf8("reverseB"));

        horizontalLayout_5->addWidget(reverseB);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_9);

        MaxLabelB = new QLabel(mBlueGroupBox);
        MaxLabelB->setObjectName(QString::fromUtf8("MaxLabelB"));

        horizontalLayout_5->addWidget(MaxLabelB);

        maxInputSpinBoxB = new QDoubleSpinBox(mBlueGroupBox);
        maxInputSpinBoxB->setObjectName(QString::fromUtf8("maxInputSpinBoxB"));

        horizontalLayout_5->addWidget(maxInputSpinBoxB);


        verticalLayout_4->addLayout(horizontalLayout_5);

        histoFrameB = new QFrame(mBlueGroupBox);
        histoFrameB->setObjectName(QString::fromUtf8("histoFrameB"));
        sizePolicy.setHeightForWidth(histoFrameB->sizePolicy().hasHeightForWidth());
        histoFrameB->setSizePolicy(sizePolicy);
        histoFrameB->setFrameShape(QFrame::StyledPanel);
        histoFrameB->setFrameShadow(QFrame::Raised);

        verticalLayout_4->addWidget(histoFrameB);


        verticalLayout->addWidget(mBlueGroupBox);

        mAlphaGroupBox = new QGroupBox(ColorFromScalarDialog);
        mAlphaGroupBox->setObjectName(QString::fromUtf8("mAlphaGroupBox"));
        verticalLayout_5 = new QVBoxLayout(mAlphaGroupBox);
        verticalLayout_5->setSpacing(3);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(6, 0, 6, 6);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        mAlphaLabel = new QLabel(mAlphaGroupBox);
        mAlphaLabel->setObjectName(QString::fromUtf8("mAlphaLabel"));
        mAlphaLabel->setFont(font1);

        horizontalLayout_7->addWidget(mAlphaLabel);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_11);

        channelComboA = new QComboBox(mAlphaGroupBox);
        channelComboA->addItem(QString());
        channelComboA->addItem(QString());
        channelComboA->addItem(QString());
        channelComboA->addItem(QString());
        channelComboA->setObjectName(QString::fromUtf8("channelComboA"));

        horizontalLayout_7->addWidget(channelComboA);

        MinLabelA = new QLabel(mAlphaGroupBox);
        MinLabelA->setObjectName(QString::fromUtf8("MinLabelA"));

        horizontalLayout_7->addWidget(MinLabelA);

        minInputSpinBoxA = new QDoubleSpinBox(mAlphaGroupBox);
        minInputSpinBoxA->setObjectName(QString::fromUtf8("minInputSpinBoxA"));

        horizontalLayout_7->addWidget(minInputSpinBoxA);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_15);

        fixA = new QCheckBox(mAlphaGroupBox);
        fixA->setObjectName(QString::fromUtf8("fixA"));
        fixA->setChecked(false);

        horizontalLayout_7->addWidget(fixA);

        reverseA = new QCheckBox(mAlphaGroupBox);
        reverseA->setObjectName(QString::fromUtf8("reverseA"));

        horizontalLayout_7->addWidget(reverseA);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_16);

        MaxLabelA = new QLabel(mAlphaGroupBox);
        MaxLabelA->setObjectName(QString::fromUtf8("MaxLabelA"));

        horizontalLayout_7->addWidget(MaxLabelA);

        maxInputSpinBoxA = new QDoubleSpinBox(mAlphaGroupBox);
        maxInputSpinBoxA->setObjectName(QString::fromUtf8("maxInputSpinBoxA"));

        horizontalLayout_7->addWidget(maxInputSpinBoxA);


        verticalLayout_5->addLayout(horizontalLayout_7);

        histoFrameA = new QFrame(mAlphaGroupBox);
        histoFrameA->setObjectName(QString::fromUtf8("histoFrameA"));
        sizePolicy.setHeightForWidth(histoFrameA->sizePolicy().hasHeightForWidth());
        histoFrameA->setSizePolicy(sizePolicy);
        histoFrameA->setFrameShape(QFrame::StyledPanel);
        histoFrameA->setFrameShadow(QFrame::Raised);

        verticalLayout_5->addWidget(histoFrameA);


        verticalLayout->addWidget(mAlphaGroupBox);

        buttonBox = new QDialogButtonBox(ColorFromScalarDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Close);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ColorFromScalarDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ColorFromScalarDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ColorFromScalarDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ColorFromScalarDialog);
    } // setupUi

    void retranslateUi(QDialog *ColorFromScalarDialog)
    {
        ColorFromScalarDialog->setWindowTitle(QCoreApplication::translate("ColorFromScalarDialog", "Color From Scalar Fields", nullptr));
        label->setText(QCoreApplication::translate("ColorFromScalarDialog", "Mapping type:", nullptr));
        toggleRGB->setText(QCoreApplication::translate("ColorFromScalarDialog", "To RGB", nullptr));
        toggleHSV->setText(QCoreApplication::translate("ColorFromScalarDialog", "To HSV", nullptr));
        mRedLabel->setText(QCoreApplication::translate("ColorFromScalarDialog", "Red", nullptr));
        channelComboR->setItemText(0, QCoreApplication::translate("ColorFromScalarDialog", "RGB", nullptr));
        channelComboR->setItemText(1, QCoreApplication::translate("ColorFromScalarDialog", "Red", nullptr));
        channelComboR->setItemText(2, QCoreApplication::translate("ColorFromScalarDialog", "Green", nullptr));
        channelComboR->setItemText(3, QCoreApplication::translate("ColorFromScalarDialog", "Blue", nullptr));

        channelComboR->setCurrentText(QCoreApplication::translate("ColorFromScalarDialog", "RGB", nullptr));
        MinLabelR->setText(QCoreApplication::translate("ColorFromScalarDialog", "Minimum:", nullptr));
        fixR->setText(QCoreApplication::translate("ColorFromScalarDialog", "Fix", nullptr));
        reverseR->setText(QCoreApplication::translate("ColorFromScalarDialog", "Reverse", nullptr));
        MaxLabelR->setText(QCoreApplication::translate("ColorFromScalarDialog", "Maximum:", nullptr));
        mGreenGroupBox->setTitle(QString());
        mGreenLabel->setText(QCoreApplication::translate("ColorFromScalarDialog", "Green", nullptr));
        channelComboG->setItemText(0, QCoreApplication::translate("ColorFromScalarDialog", "RGB", nullptr));
        channelComboG->setItemText(1, QCoreApplication::translate("ColorFromScalarDialog", "Red", nullptr));
        channelComboG->setItemText(2, QCoreApplication::translate("ColorFromScalarDialog", "Green", nullptr));
        channelComboG->setItemText(3, QCoreApplication::translate("ColorFromScalarDialog", "Blue", nullptr));

        channelComboG->setCurrentText(QCoreApplication::translate("ColorFromScalarDialog", "RGB", nullptr));
        MinLabelG->setText(QCoreApplication::translate("ColorFromScalarDialog", "Minimum:", nullptr));
        fixG->setText(QCoreApplication::translate("ColorFromScalarDialog", "Fix", nullptr));
        reverseG->setText(QCoreApplication::translate("ColorFromScalarDialog", "Reverse", nullptr));
        MaxLabelG->setText(QCoreApplication::translate("ColorFromScalarDialog", "Maximum:", nullptr));
        mBlueGroupBox->setTitle(QString());
        mBlueLabel->setText(QCoreApplication::translate("ColorFromScalarDialog", "Blue", nullptr));
        channelComboB->setItemText(0, QCoreApplication::translate("ColorFromScalarDialog", "RGB", nullptr));
        channelComboB->setItemText(1, QCoreApplication::translate("ColorFromScalarDialog", "Red", nullptr));
        channelComboB->setItemText(2, QCoreApplication::translate("ColorFromScalarDialog", "Green", nullptr));
        channelComboB->setItemText(3, QCoreApplication::translate("ColorFromScalarDialog", "Blue", nullptr));

        channelComboB->setCurrentText(QCoreApplication::translate("ColorFromScalarDialog", "RGB", nullptr));
        MinLabelB->setText(QCoreApplication::translate("ColorFromScalarDialog", "Minimum:", nullptr));
        fixB->setText(QCoreApplication::translate("ColorFromScalarDialog", "Fix", nullptr));
        reverseB->setText(QCoreApplication::translate("ColorFromScalarDialog", "Reverse", nullptr));
        MaxLabelB->setText(QCoreApplication::translate("ColorFromScalarDialog", "Maximum:", nullptr));
        mAlphaGroupBox->setTitle(QString());
        mAlphaLabel->setText(QCoreApplication::translate("ColorFromScalarDialog", "Alpha", nullptr));
        channelComboA->setItemText(0, QCoreApplication::translate("ColorFromScalarDialog", "RGB", nullptr));
        channelComboA->setItemText(1, QCoreApplication::translate("ColorFromScalarDialog", "Red", nullptr));
        channelComboA->setItemText(2, QCoreApplication::translate("ColorFromScalarDialog", "Green", nullptr));
        channelComboA->setItemText(3, QCoreApplication::translate("ColorFromScalarDialog", "Blue", nullptr));

        channelComboA->setCurrentText(QCoreApplication::translate("ColorFromScalarDialog", "RGB", nullptr));
        MinLabelA->setText(QCoreApplication::translate("ColorFromScalarDialog", "Minimum:", nullptr));
        fixA->setText(QCoreApplication::translate("ColorFromScalarDialog", "Fix", nullptr));
        reverseA->setText(QCoreApplication::translate("ColorFromScalarDialog", "Reverse", nullptr));
        MaxLabelA->setText(QCoreApplication::translate("ColorFromScalarDialog", "Maximum:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ColorFromScalarDialog: public Ui_ColorFromScalarDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLORFROMSCALARDLG_H
