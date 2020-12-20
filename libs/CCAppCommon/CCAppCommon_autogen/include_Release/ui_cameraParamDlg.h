/********************************************************************************
** Form generated from reading UI file 'cameraParamDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAMERAPARAMDLG_H
#define UI_CAMERAPARAMDLG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CameraParamDlg
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLabel *currentModeLabel;
    QFrame *anglesFrame;
    QGridLayout *gridLayout;
    QSlider *psiSlider;
    QDoubleSpinBox *psiSpinBox;
    QLabel *label_3;
    QSlider *thetaSlider;
    QDoubleSpinBox *thetaSpinBox;
    QLabel *label;
    QSlider *phiSlider;
    QLabel *label_2;
    QDoubleSpinBox *phiSpinBox;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer;
    QToolButton *pushMatrixToolButton;
    QFrame *buttonsFrame;
    QHBoxLayout *horizontalLayout_8;
    QToolButton *revertMatrixToolButton;
    QToolButton *viewUpToolButton;
    QToolButton *viewDownToolButton;
    QToolButton *viewLeftToolButton;
    QToolButton *viewRightToolButton;
    QToolButton *viewFrontToolButton;
    QToolButton *viewBackToolButton;
    QToolButton *viewIso1ToolButton;
    QToolButton *viewIso2ToolButton;
    QSpacerItem *horizontalSpacer_2;
    QFrame *line_3;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_9;
    QToolButton *pivotPickingToolButton;
    QSpacerItem *horizontalSpacer_6;
    QFrame *rotationCenterFrame;
    QVBoxLayout *verticalLayout_4;
    QDoubleSpinBox *rcxDoubleSpinBox;
    QDoubleSpinBox *rcyDoubleSpinBox;
    QDoubleSpinBox *rczDoubleSpinBox;
    QFrame *line;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_9;
    QLabel *label_13;
    QSpacerItem *horizontalSpacer_3;
    QFrame *eyePositionFrame;
    QVBoxLayout *verticalLayout_5;
    QDoubleSpinBox *exDoubleSpinBox;
    QDoubleSpinBox *eyDoubleSpinBox;
    QDoubleSpinBox *ezDoubleSpinBox;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_8;
    QDoubleSpinBox *fovDoubleSpinBox;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QSlider *zNearHorizontalSlider;
    QSpacerItem *verticalSpacer_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CameraParamDlg)
    {
        if (CameraParamDlg->objectName().isEmpty())
            CameraParamDlg->setObjectName(QString::fromUtf8("CameraParamDlg"));
        CameraParamDlg->resize(419, 476);
        verticalLayout_3 = new QVBoxLayout(CameraParamDlg);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(CameraParamDlg);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        currentModeLabel = new QLabel(CameraParamDlg);
        currentModeLabel->setObjectName(QString::fromUtf8("currentModeLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(currentModeLabel->sizePolicy().hasHeightForWidth());
        currentModeLabel->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(currentModeLabel);


        verticalLayout_3->addLayout(horizontalLayout_4);

        anglesFrame = new QFrame(CameraParamDlg);
        anglesFrame->setObjectName(QString::fromUtf8("anglesFrame"));
        gridLayout = new QGridLayout(anglesFrame);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        psiSlider = new QSlider(anglesFrame);
        psiSlider->setObjectName(QString::fromUtf8("psiSlider"));
        psiSlider->setMinimumSize(QSize(120, 0));
        psiSlider->setMinimum(-1800);
        psiSlider->setMaximum(1800);
        psiSlider->setSingleStep(10);
        psiSlider->setPageStep(100);
        psiSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(psiSlider, 0, 1, 1, 1);

        psiSpinBox = new QDoubleSpinBox(anglesFrame);
        psiSpinBox->setObjectName(QString::fromUtf8("psiSpinBox"));
        psiSpinBox->setSuffix(QString::fromUtf8("\302\260"));
        psiSpinBox->setDecimals(1);
        psiSpinBox->setMinimum(-180.000000000000000);
        psiSpinBox->setMaximum(180.000000000000000);
        psiSpinBox->setSingleStep(0.100000000000000);

        gridLayout->addWidget(psiSpinBox, 0, 2, 1, 1);

        label_3 = new QLabel(anglesFrame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setText(QString::fromUtf8("X1"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        thetaSlider = new QSlider(anglesFrame);
        thetaSlider->setObjectName(QString::fromUtf8("thetaSlider"));
        thetaSlider->setMinimumSize(QSize(120, 0));
        thetaSlider->setMinimum(-1800);
        thetaSlider->setMaximum(1800);
        thetaSlider->setSingleStep(10);
        thetaSlider->setPageStep(100);
        thetaSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(thetaSlider, 2, 1, 1, 1);

        thetaSpinBox = new QDoubleSpinBox(anglesFrame);
        thetaSpinBox->setObjectName(QString::fromUtf8("thetaSpinBox"));
        thetaSpinBox->setSuffix(QString::fromUtf8("\302\260"));
        thetaSpinBox->setDecimals(1);
        thetaSpinBox->setMinimum(-180.000000000000000);
        thetaSpinBox->setMaximum(180.000000000000000);
        thetaSpinBox->setSingleStep(0.100000000000000);

        gridLayout->addWidget(thetaSpinBox, 2, 2, 1, 1);

        label = new QLabel(anglesFrame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setText(QString::fromUtf8("Y2"));

        gridLayout->addWidget(label, 2, 0, 1, 1);

        phiSlider = new QSlider(anglesFrame);
        phiSlider->setObjectName(QString::fromUtf8("phiSlider"));
        phiSlider->setMinimumSize(QSize(120, 0));
        phiSlider->setMinimum(-1800);
        phiSlider->setMaximum(1800);
        phiSlider->setSingleStep(10);
        phiSlider->setPageStep(100);
        phiSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(phiSlider, 3, 1, 1, 1);

        label_2 = new QLabel(anglesFrame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setText(QString::fromUtf8("Z3"));

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        phiSpinBox = new QDoubleSpinBox(anglesFrame);
        phiSpinBox->setObjectName(QString::fromUtf8("phiSpinBox"));
        phiSpinBox->setSuffix(QString::fromUtf8("\302\260"));
        phiSpinBox->setDecimals(1);
        phiSpinBox->setMinimum(-180.000000000000000);
        phiSpinBox->setMaximum(180.000000000000000);
        phiSpinBox->setSingleStep(0.100000000000000);

        gridLayout->addWidget(phiSpinBox, 3, 2, 1, 1);


        verticalLayout_3->addWidget(anglesFrame);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer);

        pushMatrixToolButton = new QToolButton(CameraParamDlg);
        pushMatrixToolButton->setObjectName(QString::fromUtf8("pushMatrixToolButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/CC/images/smallBasket.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushMatrixToolButton->setIcon(icon);

        horizontalLayout_9->addWidget(pushMatrixToolButton);

        buttonsFrame = new QFrame(CameraParamDlg);
        buttonsFrame->setObjectName(QString::fromUtf8("buttonsFrame"));
        buttonsFrame->setEnabled(false);
        buttonsFrame->setFrameShape(QFrame::NoFrame);
        horizontalLayout_8 = new QHBoxLayout(buttonsFrame);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        revertMatrixToolButton = new QToolButton(buttonsFrame);
        revertMatrixToolButton->setObjectName(QString::fromUtf8("revertMatrixToolButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/CC/images/smallRevert.png"), QSize(), QIcon::Normal, QIcon::Off);
        revertMatrixToolButton->setIcon(icon1);

        horizontalLayout_8->addWidget(revertMatrixToolButton);

        viewUpToolButton = new QToolButton(buttonsFrame);
        viewUpToolButton->setObjectName(QString::fromUtf8("viewUpToolButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/CC/images/ccViewZpos.png"), QSize(), QIcon::Normal, QIcon::Off);
        viewUpToolButton->setIcon(icon2);

        horizontalLayout_8->addWidget(viewUpToolButton);

        viewDownToolButton = new QToolButton(buttonsFrame);
        viewDownToolButton->setObjectName(QString::fromUtf8("viewDownToolButton"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/CC/images/ccViewZneg.png"), QSize(), QIcon::Normal, QIcon::Off);
        viewDownToolButton->setIcon(icon3);

        horizontalLayout_8->addWidget(viewDownToolButton);

        viewLeftToolButton = new QToolButton(buttonsFrame);
        viewLeftToolButton->setObjectName(QString::fromUtf8("viewLeftToolButton"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/CC/images/ccViewXpos.png"), QSize(), QIcon::Normal, QIcon::Off);
        viewLeftToolButton->setIcon(icon4);

        horizontalLayout_8->addWidget(viewLeftToolButton);

        viewRightToolButton = new QToolButton(buttonsFrame);
        viewRightToolButton->setObjectName(QString::fromUtf8("viewRightToolButton"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/CC/images/ccViewXneg.png"), QSize(), QIcon::Normal, QIcon::Off);
        viewRightToolButton->setIcon(icon5);

        horizontalLayout_8->addWidget(viewRightToolButton);

        viewFrontToolButton = new QToolButton(buttonsFrame);
        viewFrontToolButton->setObjectName(QString::fromUtf8("viewFrontToolButton"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/CC/images/ccViewYpos.png"), QSize(), QIcon::Normal, QIcon::Off);
        viewFrontToolButton->setIcon(icon6);

        horizontalLayout_8->addWidget(viewFrontToolButton);

        viewBackToolButton = new QToolButton(buttonsFrame);
        viewBackToolButton->setObjectName(QString::fromUtf8("viewBackToolButton"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/CC/images/ccViewYneg.png"), QSize(), QIcon::Normal, QIcon::Off);
        viewBackToolButton->setIcon(icon7);

        horizontalLayout_8->addWidget(viewBackToolButton);

        viewIso1ToolButton = new QToolButton(buttonsFrame);
        viewIso1ToolButton->setObjectName(QString::fromUtf8("viewIso1ToolButton"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/CC/images/ccViewIso1.png"), QSize(), QIcon::Normal, QIcon::Off);
        viewIso1ToolButton->setIcon(icon8);

        horizontalLayout_8->addWidget(viewIso1ToolButton);

        viewIso2ToolButton = new QToolButton(buttonsFrame);
        viewIso2ToolButton->setObjectName(QString::fromUtf8("viewIso2ToolButton"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/CC/images/ccViewIso2.png"), QSize(), QIcon::Normal, QIcon::Off);
        viewIso2ToolButton->setIcon(icon9);

        horizontalLayout_8->addWidget(viewIso2ToolButton);


        horizontalLayout_9->addWidget(buttonsFrame);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout_9);

        line_3 = new QFrame(CameraParamDlg);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_7);

        label_9 = new QLabel(CameraParamDlg);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_9);

        pivotPickingToolButton = new QToolButton(CameraParamDlg);
        pivotPickingToolButton->setObjectName(QString::fromUtf8("pivotPickingToolButton"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/CC/images/ccPointPicking.png"), QSize(), QIcon::Normal, QIcon::Off);
        pivotPickingToolButton->setIcon(icon10);
        pivotPickingToolButton->setCheckable(true);

        horizontalLayout_2->addWidget(pivotPickingToolButton);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);


        verticalLayout_2->addLayout(horizontalLayout_2);

        rotationCenterFrame = new QFrame(CameraParamDlg);
        rotationCenterFrame->setObjectName(QString::fromUtf8("rotationCenterFrame"));
        verticalLayout_4 = new QVBoxLayout(rotationCenterFrame);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        rcxDoubleSpinBox = new QDoubleSpinBox(rotationCenterFrame);
        rcxDoubleSpinBox->setObjectName(QString::fromUtf8("rcxDoubleSpinBox"));
        rcxDoubleSpinBox->setDecimals(6);
        rcxDoubleSpinBox->setMinimum(-999999999.000000000000000);
        rcxDoubleSpinBox->setMaximum(999999999.000000000000000);

        verticalLayout_4->addWidget(rcxDoubleSpinBox);

        rcyDoubleSpinBox = new QDoubleSpinBox(rotationCenterFrame);
        rcyDoubleSpinBox->setObjectName(QString::fromUtf8("rcyDoubleSpinBox"));
        rcyDoubleSpinBox->setDecimals(6);
        rcyDoubleSpinBox->setMinimum(-999999999.000000000000000);
        rcyDoubleSpinBox->setMaximum(999999999.000000000000000);

        verticalLayout_4->addWidget(rcyDoubleSpinBox);

        rczDoubleSpinBox = new QDoubleSpinBox(rotationCenterFrame);
        rczDoubleSpinBox->setObjectName(QString::fromUtf8("rczDoubleSpinBox"));
        rczDoubleSpinBox->setDecimals(6);
        rczDoubleSpinBox->setMinimum(-999999999.000000000000000);
        rczDoubleSpinBox->setMaximum(999999999.000000000000000);

        verticalLayout_4->addWidget(rczDoubleSpinBox);


        verticalLayout_2->addWidget(rotationCenterFrame);


        horizontalLayout_3->addLayout(verticalLayout_2);

        line = new QFrame(CameraParamDlg);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_3->addWidget(line);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_9);

        label_13 = new QLabel(CameraParamDlg);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_13);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout);

        eyePositionFrame = new QFrame(CameraParamDlg);
        eyePositionFrame->setObjectName(QString::fromUtf8("eyePositionFrame"));
        verticalLayout_5 = new QVBoxLayout(eyePositionFrame);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        exDoubleSpinBox = new QDoubleSpinBox(eyePositionFrame);
        exDoubleSpinBox->setObjectName(QString::fromUtf8("exDoubleSpinBox"));
        exDoubleSpinBox->setDecimals(6);
        exDoubleSpinBox->setMinimum(-999999999.000000000000000);
        exDoubleSpinBox->setMaximum(999999999.000000000000000);

        verticalLayout_5->addWidget(exDoubleSpinBox);

        eyDoubleSpinBox = new QDoubleSpinBox(eyePositionFrame);
        eyDoubleSpinBox->setObjectName(QString::fromUtf8("eyDoubleSpinBox"));
        eyDoubleSpinBox->setDecimals(6);
        eyDoubleSpinBox->setMinimum(-999999999.000000000000000);
        eyDoubleSpinBox->setMaximum(999999999.000000000000000);

        verticalLayout_5->addWidget(eyDoubleSpinBox);

        ezDoubleSpinBox = new QDoubleSpinBox(eyePositionFrame);
        ezDoubleSpinBox->setObjectName(QString::fromUtf8("ezDoubleSpinBox"));
        ezDoubleSpinBox->setDecimals(6);
        ezDoubleSpinBox->setMinimum(-999999999.000000000000000);
        ezDoubleSpinBox->setMaximum(999999999.000000000000000);

        verticalLayout_5->addWidget(ezDoubleSpinBox);


        verticalLayout->addWidget(eyePositionFrame);


        horizontalLayout_3->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout_3);

        line_2 = new QFrame(CameraParamDlg);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_2);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_8 = new QLabel(CameraParamDlg);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_11->addWidget(label_8);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_8);

        fovDoubleSpinBox = new QDoubleSpinBox(CameraParamDlg);
        fovDoubleSpinBox->setObjectName(QString::fromUtf8("fovDoubleSpinBox"));
        fovDoubleSpinBox->setSuffix(QString::fromUtf8("\302\260"));
        fovDoubleSpinBox->setMinimum(0.010000000000000);
        fovDoubleSpinBox->setMaximum(180.000000000000000);
        fovDoubleSpinBox->setValue(30.000000000000000);

        horizontalLayout_11->addWidget(fovDoubleSpinBox);


        verticalLayout_3->addLayout(horizontalLayout_11);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(CameraParamDlg);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        zNearHorizontalSlider = new QSlider(CameraParamDlg);
        zNearHorizontalSlider->setObjectName(QString::fromUtf8("zNearHorizontalSlider"));
        zNearHorizontalSlider->setMinimum(0);
        zNearHorizontalSlider->setMaximum(150);
        zNearHorizontalSlider->setValue(0);
        zNearHorizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_5->addWidget(zNearHorizontalSlider);


        verticalLayout_3->addLayout(horizontalLayout_5);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        buttonBox = new QDialogButtonBox(CameraParamDlg);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout_3->addWidget(buttonBox);


        retranslateUi(CameraParamDlg);
        QObject::connect(buttonBox, SIGNAL(accepted()), CameraParamDlg, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), CameraParamDlg, SLOT(reject()));

        QMetaObject::connectSlotsByName(CameraParamDlg);
    } // setupUi

    void retranslateUi(QDialog *CameraParamDlg)
    {
        CameraParamDlg->setWindowTitle(QCoreApplication::translate("CameraParamDlg", "Camera parameters", nullptr));
        label_4->setText(QCoreApplication::translate("CameraParamDlg", "Current mode:", nullptr));
        currentModeLabel->setText(QCoreApplication::translate("CameraParamDlg", "parallel projection", nullptr));
#if QT_CONFIG(tooltip)
        psiSlider->setToolTip(QCoreApplication::translate("CameraParamDlg", "First rotation: around X", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        psiSpinBox->setToolTip(QCoreApplication::translate("CameraParamDlg", "First rotation: around X", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        label_3->setToolTip(QCoreApplication::translate("CameraParamDlg", "Third rotation: around the camera X axis (horizontal if phi = 0 and theta = 0)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        thetaSlider->setToolTip(QCoreApplication::translate("CameraParamDlg", "Second rotation: around Y2 (i.e. after the rotation around X)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        thetaSpinBox->setToolTip(QCoreApplication::translate("CameraParamDlg", "Second rotation: around Y2 (i.e. after the rotation around X)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        label->setToolTip(QCoreApplication::translate("CameraParamDlg", "Second rotation: around the camera Y axis (vertical if phi = 0)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        phiSlider->setToolTip(QCoreApplication::translate("CameraParamDlg", "Third rotation: around Z3 (i.e. after the rotation around X1 and Y2)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        label_2->setToolTip(QCoreApplication::translate("CameraParamDlg", "First rotation: around the camera Z axis (normal to the screen)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        phiSpinBox->setToolTip(QCoreApplication::translate("CameraParamDlg", "Third rotation: around Z3 (i.e. after the rotation around X1 and Y2)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        pushMatrixToolButton->setToolTip(QCoreApplication::translate("CameraParamDlg", "Push current camera orientation", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        pushMatrixToolButton->setStatusTip(QCoreApplication::translate("CameraParamDlg", "Push current camera orientation", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(tooltip)
        revertMatrixToolButton->setToolTip(QCoreApplication::translate("CameraParamDlg", "Revert to previously stored camera orientation", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        revertMatrixToolButton->setStatusTip(QCoreApplication::translate("CameraParamDlg", "Revert to previously stored camera orientation", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(tooltip)
        viewUpToolButton->setToolTip(QCoreApplication::translate("CameraParamDlg", "Set 'up' view", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        viewUpToolButton->setStatusTip(QCoreApplication::translate("CameraParamDlg", "Set 'up' view", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(tooltip)
        viewDownToolButton->setToolTip(QCoreApplication::translate("CameraParamDlg", "Set 'down' view", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        viewDownToolButton->setStatusTip(QCoreApplication::translate("CameraParamDlg", "Set 'down' view", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(tooltip)
        viewLeftToolButton->setToolTip(QCoreApplication::translate("CameraParamDlg", "Set 'left' view", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        viewLeftToolButton->setStatusTip(QCoreApplication::translate("CameraParamDlg", "Set 'left' view", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(tooltip)
        viewRightToolButton->setToolTip(QCoreApplication::translate("CameraParamDlg", "Set 'right' view", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        viewRightToolButton->setStatusTip(QCoreApplication::translate("CameraParamDlg", "Set 'right' view", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(tooltip)
        viewFrontToolButton->setToolTip(QCoreApplication::translate("CameraParamDlg", "Set 'front' view", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        viewFrontToolButton->setStatusTip(QCoreApplication::translate("CameraParamDlg", "Set 'front' view", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(tooltip)
        viewBackToolButton->setToolTip(QCoreApplication::translate("CameraParamDlg", "Set 'back' view", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        viewBackToolButton->setStatusTip(QCoreApplication::translate("CameraParamDlg", "Set 'back' view", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(tooltip)
        viewIso1ToolButton->setToolTip(QCoreApplication::translate("CameraParamDlg", "Set 'front' isometric view", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        viewIso1ToolButton->setStatusTip(QCoreApplication::translate("CameraParamDlg", "Set 'front' isometric view", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(tooltip)
        viewIso2ToolButton->setToolTip(QCoreApplication::translate("CameraParamDlg", "Set 'back' isometric view", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        viewIso2ToolButton->setStatusTip(QCoreApplication::translate("CameraParamDlg", "Set 'back' isometric view", nullptr));
#endif // QT_CONFIG(statustip)
        label_9->setText(QCoreApplication::translate("CameraParamDlg", "Rotation Center", nullptr));
#if QT_CONFIG(tooltip)
        pivotPickingToolButton->setToolTip(QCoreApplication::translate("CameraParamDlg", "Pick a 3D point as rotation center", nullptr));
#endif // QT_CONFIG(tooltip)
        pivotPickingToolButton->setText(QString());
        label_13->setText(QCoreApplication::translate("CameraParamDlg", "Camera/eye center", nullptr));
#if QT_CONFIG(tooltip)
        label_8->setToolTip(QCoreApplication::translate("CameraParamDlg", "f.o.v. (perspective mode only)", nullptr));
#endif // QT_CONFIG(tooltip)
        label_8->setText(QCoreApplication::translate("CameraParamDlg", "Field of view", nullptr));
#if QT_CONFIG(tooltip)
        label_5->setToolTip(QCoreApplication::translate("CameraParamDlg", "Relative position (zNear)", nullptr));
#endif // QT_CONFIG(tooltip)
        label_5->setText(QCoreApplication::translate("CameraParamDlg", "Near clipping plane", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CameraParamDlg: public Ui_CameraParamDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAMERAPARAMDLG_H
