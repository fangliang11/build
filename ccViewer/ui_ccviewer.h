/********************************************************************************
** Form generated from reading UI file 'ccviewer.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CCVIEWER_H
#define UI_CCVIEWER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ccViewerClass
{
public:
    QAction *actionDisplayParameters;
    QAction *actionFullScreen;
    QAction *actionEditCamera;
    QAction *actionToggleSunLight;
    QAction *actionToggleCustomLight;
    QAction *actionAbout;
    QAction *actionHelpShortcuts;
    QAction *actionSetViewFront;
    QAction *actionSetViewBack;
    QAction *actionSetViewLeft;
    QAction *actionSetViewRight;
    QAction *actionSetViewTop;
    QAction *actionSetViewBottom;
    QAction *actionShowColors;
    QAction *actionShowNormals;
    QAction *actionShowColorRamp;
    QAction *actionShowScalarField;
    QAction *actionDummyAction;
    QAction *actionDelete;
    QAction *actionSetOrthoView;
    QAction *actionSetCenteredPerspectiveView;
    QAction *actionSetViewerPerspectiveView;
    QAction *actionSetPivotAlwaysOn;
    QAction *actionSetPivotRotationOnly;
    QAction *actionSetPivotOff;
    QAction *actionSetViewIso1;
    QAction *actionSetViewIso2;
    QAction *actionEnable3DMouse;
    QAction *actionZoomOnSelectedEntity;
    QAction *actionGlobalZoom;
    QAction *actionNoFilter;
    QAction *actionLockRotationVertAxis;
    QAction *actionEnableStereo;
    QAction *actionShowMaterials;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QFrame *GLframe;
    QMenuBar *menuBar;
    QMenu *menuOptions;
    QMenu *menuPerspective;
    QMenu *menuLights;
    QMenu *menuStandardViews;
    QMenu *menuSelected;
    QMenu *menuSelectSF;
    QMenu *menuRotationSymbol;
    QMenu *menu3DMouse;
    QMenu *menuAbout;
    QMenu *menuPlugins;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ccViewerClass)
    {
        if (ccViewerClass->objectName().isEmpty())
            ccViewerClass->setObjectName(QString::fromUtf8("ccViewerClass"));
        ccViewerClass->resize(800, 600);
        ccViewerClass->setAcceptDrops(true);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/CC/Icons/images/icon/cc_viewer_icon_16.png"), QSize(), QIcon::Normal, QIcon::Off);
        ccViewerClass->setWindowIcon(icon);
        ccViewerClass->setStyleSheet(QString::fromUtf8("QWidget {\n"
"	background-color: rgb(200,200,200);\n"
"}\n"
"\n"
"QMenu\n"
"{\n"
"	background: rgb(200,200,200);\n"
"}\n"
"\n"
"QMenu::separator \n"
"{\n"
"     height: 2px;\n"
"     background: rgb(100,100,100);\n"
"     margin-left: 10px;\n"
"     margin-right: 5px;\n"
" }\n"
"\n"
"QMenuBar \n"
"{\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1,stop:0 rgb(255,255,255), stop:1 rgb(200,200,200));\n"
" }\n"
"\n"
"QStatusBar\n"
"{\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1,stop:0 rgb(200,200,200), stop:1 rgb(255,255,255));\n"
"}\n"
""));
        actionDisplayParameters = new QAction(ccViewerClass);
        actionDisplayParameters->setObjectName(QString::fromUtf8("actionDisplayParameters"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/CC/images/ccLightParams.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDisplayParameters->setIcon(icon1);
        actionDisplayParameters->setShortcutContext(Qt::ApplicationShortcut);
        actionFullScreen = new QAction(ccViewerClass);
        actionFullScreen->setObjectName(QString::fromUtf8("actionFullScreen"));
        actionFullScreen->setCheckable(true);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/CC/images/ccFullScreen.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFullScreen->setIcon(icon2);
        actionFullScreen->setShortcutContext(Qt::ApplicationShortcut);
        actionEditCamera = new QAction(ccViewerClass);
        actionEditCamera->setObjectName(QString::fromUtf8("actionEditCamera"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/CC/images/ccCamera.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEditCamera->setIcon(icon3);
        actionToggleSunLight = new QAction(ccViewerClass);
        actionToggleSunLight->setObjectName(QString::fromUtf8("actionToggleSunLight"));
        actionToggleSunLight->setCheckable(true);
        actionToggleSunLight->setShortcutContext(Qt::ApplicationShortcut);
        actionToggleCustomLight = new QAction(ccViewerClass);
        actionToggleCustomLight->setObjectName(QString::fromUtf8("actionToggleCustomLight"));
        actionToggleCustomLight->setCheckable(true);
        actionToggleCustomLight->setShortcutContext(Qt::ApplicationShortcut);
        actionAbout = new QAction(ccViewerClass);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionHelpShortcuts = new QAction(ccViewerClass);
        actionHelpShortcuts->setObjectName(QString::fromUtf8("actionHelpShortcuts"));
        actionHelpShortcuts->setShortcutContext(Qt::ApplicationShortcut);
        actionSetViewFront = new QAction(ccViewerClass);
        actionSetViewFront->setObjectName(QString::fromUtf8("actionSetViewFront"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/CC/images/ccViewYpos.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetViewFront->setIcon(icon4);
        actionSetViewFront->setShortcutContext(Qt::ApplicationShortcut);
        actionSetViewBack = new QAction(ccViewerClass);
        actionSetViewBack->setObjectName(QString::fromUtf8("actionSetViewBack"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/CC/images/ccViewYneg.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetViewBack->setIcon(icon5);
        actionSetViewBack->setShortcutContext(Qt::ApplicationShortcut);
        actionSetViewLeft = new QAction(ccViewerClass);
        actionSetViewLeft->setObjectName(QString::fromUtf8("actionSetViewLeft"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/CC/images/ccViewXpos.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetViewLeft->setIcon(icon6);
        actionSetViewLeft->setShortcutContext(Qt::ApplicationShortcut);
        actionSetViewRight = new QAction(ccViewerClass);
        actionSetViewRight->setObjectName(QString::fromUtf8("actionSetViewRight"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/CC/images/ccViewXneg.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetViewRight->setIcon(icon7);
        actionSetViewRight->setShortcutContext(Qt::ApplicationShortcut);
        actionSetViewTop = new QAction(ccViewerClass);
        actionSetViewTop->setObjectName(QString::fromUtf8("actionSetViewTop"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/CC/images/ccViewZpos.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetViewTop->setIcon(icon8);
        actionSetViewTop->setShortcutContext(Qt::ApplicationShortcut);
        actionSetViewBottom = new QAction(ccViewerClass);
        actionSetViewBottom->setObjectName(QString::fromUtf8("actionSetViewBottom"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/CC/images/ccViewZneg.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetViewBottom->setIcon(icon9);
        actionShowColors = new QAction(ccViewerClass);
        actionShowColors->setObjectName(QString::fromUtf8("actionShowColors"));
        actionShowColors->setCheckable(true);
        actionShowColors->setShortcutContext(Qt::ApplicationShortcut);
        actionShowNormals = new QAction(ccViewerClass);
        actionShowNormals->setObjectName(QString::fromUtf8("actionShowNormals"));
        actionShowNormals->setCheckable(true);
        actionShowNormals->setShortcutContext(Qt::ApplicationShortcut);
        actionShowColorRamp = new QAction(ccViewerClass);
        actionShowColorRamp->setObjectName(QString::fromUtf8("actionShowColorRamp"));
        actionShowColorRamp->setCheckable(true);
        actionShowColorRamp->setShortcutContext(Qt::ApplicationShortcut);
        actionShowScalarField = new QAction(ccViewerClass);
        actionShowScalarField->setObjectName(QString::fromUtf8("actionShowScalarField"));
        actionShowScalarField->setCheckable(true);
        actionShowScalarField->setShortcutContext(Qt::ApplicationShortcut);
        actionDummyAction = new QAction(ccViewerClass);
        actionDummyAction->setObjectName(QString::fromUtf8("actionDummyAction"));
        actionDelete = new QAction(ccViewerClass);
        actionDelete->setObjectName(QString::fromUtf8("actionDelete"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/CC/images/ccDelete.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDelete->setIcon(icon10);
        actionDelete->setShortcutContext(Qt::ApplicationShortcut);
        actionSetOrthoView = new QAction(ccViewerClass);
        actionSetOrthoView->setObjectName(QString::fromUtf8("actionSetOrthoView"));
        actionSetOrthoView->setCheckable(true);
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/CC/images/ccOrthoMode32.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetOrthoView->setIcon(icon11);
        actionSetCenteredPerspectiveView = new QAction(ccViewerClass);
        actionSetCenteredPerspectiveView->setObjectName(QString::fromUtf8("actionSetCenteredPerspectiveView"));
        actionSetCenteredPerspectiveView->setCheckable(true);
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/CC/images/ccCenteredPerspective32.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetCenteredPerspectiveView->setIcon(icon12);
        actionSetViewerPerspectiveView = new QAction(ccViewerClass);
        actionSetViewerPerspectiveView->setObjectName(QString::fromUtf8("actionSetViewerPerspectiveView"));
        actionSetViewerPerspectiveView->setCheckable(true);
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/CC/images/ccViewerBasedPerspective32.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetViewerPerspectiveView->setIcon(icon13);
        actionSetPivotAlwaysOn = new QAction(ccViewerClass);
        actionSetPivotAlwaysOn->setObjectName(QString::fromUtf8("actionSetPivotAlwaysOn"));
        actionSetPivotAlwaysOn->setCheckable(true);
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/CC/images/ccPivotOn.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetPivotAlwaysOn->setIcon(icon14);
        actionSetPivotRotationOnly = new QAction(ccViewerClass);
        actionSetPivotRotationOnly->setObjectName(QString::fromUtf8("actionSetPivotRotationOnly"));
        actionSetPivotRotationOnly->setCheckable(true);
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/CC/images/ccPivotAuto.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetPivotRotationOnly->setIcon(icon15);
        actionSetPivotOff = new QAction(ccViewerClass);
        actionSetPivotOff->setObjectName(QString::fromUtf8("actionSetPivotOff"));
        actionSetPivotOff->setCheckable(true);
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/CC/images/ccPivotOff.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetPivotOff->setIcon(icon16);
        actionSetViewIso1 = new QAction(ccViewerClass);
        actionSetViewIso1->setObjectName(QString::fromUtf8("actionSetViewIso1"));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/CC/images/ccViewIso1.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetViewIso1->setIcon(icon17);
        actionSetViewIso1->setShortcutContext(Qt::ApplicationShortcut);
        actionSetViewIso2 = new QAction(ccViewerClass);
        actionSetViewIso2->setObjectName(QString::fromUtf8("actionSetViewIso2"));
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/CC/images/ccViewIso2.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetViewIso2->setIcon(icon18);
        actionSetViewIso2->setShortcutContext(Qt::ApplicationShortcut);
        actionEnable3DMouse = new QAction(ccViewerClass);
        actionEnable3DMouse->setObjectName(QString::fromUtf8("actionEnable3DMouse"));
        actionEnable3DMouse->setCheckable(true);
        actionZoomOnSelectedEntity = new QAction(ccViewerClass);
        actionZoomOnSelectedEntity->setObjectName(QString::fromUtf8("actionZoomOnSelectedEntity"));
        actionGlobalZoom = new QAction(ccViewerClass);
        actionGlobalZoom->setObjectName(QString::fromUtf8("actionGlobalZoom"));
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/CC/images/ccGlobalZoom.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionGlobalZoom->setIcon(icon19);
        actionNoFilter = new QAction(ccViewerClass);
        actionNoFilter->setObjectName(QString::fromUtf8("actionNoFilter"));
        actionLockRotationVertAxis = new QAction(ccViewerClass);
        actionLockRotationVertAxis->setObjectName(QString::fromUtf8("actionLockRotationVertAxis"));
        actionLockRotationVertAxis->setCheckable(true);
        actionLockRotationVertAxis->setShortcutContext(Qt::ApplicationShortcut);
        actionEnableStereo = new QAction(ccViewerClass);
        actionEnableStereo->setObjectName(QString::fromUtf8("actionEnableStereo"));
        actionEnableStereo->setCheckable(true);
        QIcon icon20;
        icon20.addFile(QString::fromUtf8(":/CC/images/ccStereo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEnableStereo->setIcon(icon20);
        actionShowMaterials = new QAction(ccViewerClass);
        actionShowMaterials->setObjectName(QString::fromUtf8("actionShowMaterials"));
        actionShowMaterials->setCheckable(true);
        actionShowMaterials->setShortcutContext(Qt::ApplicationShortcut);
        centralWidget = new QWidget(ccViewerClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        GLframe = new QFrame(centralWidget);
        GLframe->setObjectName(QString::fromUtf8("GLframe"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(GLframe->sizePolicy().hasHeightForWidth());
        GLframe->setSizePolicy(sizePolicy);
        GLframe->setStyleSheet(QString::fromUtf8("QFrame{\n"
"	border: 2px solid white;\n"
"	border-radius: 10px;\n"
"	background: qlineargradient(x1:0, y1:0, x2:0, y2:1,stop:0 rgb(10,102,151), stop:1 rgb(0,0,0));\n"
" }\n"
"\n"
""));
        GLframe->setFrameShape(QFrame::Box);
        GLframe->setFrameShadow(QFrame::Plain);

        verticalLayout->addWidget(GLframe);

        ccViewerClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ccViewerClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 21));
        menuOptions = new QMenu(menuBar);
        menuOptions->setObjectName(QString::fromUtf8("menuOptions"));
        menuPerspective = new QMenu(menuOptions);
        menuPerspective->setObjectName(QString::fromUtf8("menuPerspective"));
        menuPerspective->setIcon(icon12);
        menuLights = new QMenu(menuOptions);
        menuLights->setObjectName(QString::fromUtf8("menuLights"));
        QIcon icon21;
        icon21.addFile(QString::fromUtf8(":/CC/images/ccSunLight.png"), QSize(), QIcon::Normal, QIcon::Off);
        menuLights->setIcon(icon21);
        menuStandardViews = new QMenu(menuOptions);
        menuStandardViews->setObjectName(QString::fromUtf8("menuStandardViews"));
        menuStandardViews->setIcon(icon4);
        menuSelected = new QMenu(menuOptions);
        menuSelected->setObjectName(QString::fromUtf8("menuSelected"));
        menuSelectSF = new QMenu(menuSelected);
        menuSelectSF->setObjectName(QString::fromUtf8("menuSelectSF"));
        menuSelectSF->setEnabled(false);
        menuRotationSymbol = new QMenu(menuOptions);
        menuRotationSymbol->setObjectName(QString::fromUtf8("menuRotationSymbol"));
        menuRotationSymbol->setIcon(icon14);
        menu3DMouse = new QMenu(menuOptions);
        menu3DMouse->setObjectName(QString::fromUtf8("menu3DMouse"));
        QIcon icon22;
        icon22.addFile(QString::fromUtf8(":/CC/images/im3DxLogo.png"), QSize(), QIcon::Normal, QIcon::Off);
        menu3DMouse->setIcon(icon22);
        menuAbout = new QMenu(menuBar);
        menuAbout->setObjectName(QString::fromUtf8("menuAbout"));
        menuPlugins = new QMenu(menuBar);
        menuPlugins->setObjectName(QString::fromUtf8("menuPlugins"));
        ccViewerClass->setMenuBar(menuBar);
        statusBar = new QStatusBar(ccViewerClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        ccViewerClass->setStatusBar(statusBar);

        menuBar->addAction(menuOptions->menuAction());
        menuBar->addAction(menuPlugins->menuAction());
        menuBar->addAction(menuAbout->menuAction());
        menuOptions->addAction(actionDisplayParameters);
        menuOptions->addAction(actionEditCamera);
        menuOptions->addSeparator();
        menuOptions->addAction(menuStandardViews->menuAction());
        menuOptions->addAction(menuPerspective->menuAction());
        menuOptions->addAction(menuRotationSymbol->menuAction());
        menuOptions->addAction(menu3DMouse->menuAction());
        menuOptions->addAction(menuLights->menuAction());
        menuOptions->addAction(actionGlobalZoom);
        menuOptions->addAction(actionEnableStereo);
        menuOptions->addAction(actionFullScreen);
        menuOptions->addAction(actionLockRotationVertAxis);
        menuOptions->addSeparator();
        menuOptions->addAction(menuSelected->menuAction());
        menuPerspective->addAction(actionSetOrthoView);
        menuPerspective->addAction(actionSetCenteredPerspectiveView);
        menuPerspective->addAction(actionSetViewerPerspectiveView);
        menuLights->addAction(actionToggleSunLight);
        menuLights->addAction(actionToggleCustomLight);
        menuStandardViews->addAction(actionSetViewTop);
        menuStandardViews->addAction(actionSetViewFront);
        menuStandardViews->addAction(actionSetViewLeft);
        menuStandardViews->addAction(actionSetViewBack);
        menuStandardViews->addAction(actionSetViewRight);
        menuStandardViews->addAction(actionSetViewBottom);
        menuStandardViews->addAction(actionSetViewIso1);
        menuStandardViews->addAction(actionSetViewIso2);
        menuSelected->addAction(actionShowColors);
        menuSelected->addAction(actionShowNormals);
        menuSelected->addAction(actionShowMaterials);
        menuSelected->addSeparator();
        menuSelected->addAction(actionShowScalarField);
        menuSelected->addAction(actionShowColorRamp);
        menuSelected->addAction(menuSelectSF->menuAction());
        menuSelected->addAction(actionZoomOnSelectedEntity);
        menuSelected->addAction(actionDelete);
        menuSelectSF->addAction(actionDummyAction);
        menuRotationSymbol->addAction(actionSetPivotAlwaysOn);
        menuRotationSymbol->addAction(actionSetPivotRotationOnly);
        menuRotationSymbol->addAction(actionSetPivotOff);
        menu3DMouse->addAction(actionEnable3DMouse);
        menuAbout->addAction(actionAbout);
        menuAbout->addSeparator();
        menuAbout->addAction(actionHelpShortcuts);
        menuPlugins->addAction(actionNoFilter);

        retranslateUi(ccViewerClass);

        QMetaObject::connectSlotsByName(ccViewerClass);
    } // setupUi

    void retranslateUi(QMainWindow *ccViewerClass)
    {
        ccViewerClass->setWindowTitle(QCoreApplication::translate("ccViewerClass", "ccViewer", nullptr));
        actionDisplayParameters->setText(QCoreApplication::translate("ccViewerClass", "Display parameters", nullptr));
#if QT_CONFIG(tooltip)
        actionDisplayParameters->setToolTip(QCoreApplication::translate("ccViewerClass", "Set display parameters (light, materials, etc.)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionDisplayParameters->setStatusTip(QCoreApplication::translate("ccViewerClass", "Set display parameters (light, materials, etc.)", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        actionDisplayParameters->setShortcut(QCoreApplication::translate("ccViewerClass", "Alt+D", nullptr));
#endif // QT_CONFIG(shortcut)
        actionFullScreen->setText(QCoreApplication::translate("ccViewerClass", "Full screen", nullptr));
#if QT_CONFIG(shortcut)
        actionFullScreen->setShortcut(QCoreApplication::translate("ccViewerClass", "F11", nullptr));
#endif // QT_CONFIG(shortcut)
        actionEditCamera->setText(QCoreApplication::translate("ccViewerClass", "Camera parameters", nullptr));
#if QT_CONFIG(shortcut)
        actionEditCamera->setShortcut(QCoreApplication::translate("ccViewerClass", "Alt+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionToggleSunLight->setText(QCoreApplication::translate("ccViewerClass", "Sun", nullptr));
#if QT_CONFIG(shortcut)
        actionToggleSunLight->setShortcut(QCoreApplication::translate("ccViewerClass", "F6", nullptr));
#endif // QT_CONFIG(shortcut)
        actionToggleCustomLight->setText(QCoreApplication::translate("ccViewerClass", "Custom", nullptr));
#if QT_CONFIG(shortcut)
        actionToggleCustomLight->setShortcut(QCoreApplication::translate("ccViewerClass", "F7", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAbout->setText(QCoreApplication::translate("ccViewerClass", "About", nullptr));
        actionHelpShortcuts->setText(QCoreApplication::translate("ccViewerClass", "Shortcuts", nullptr));
#if QT_CONFIG(shortcut)
        actionHelpShortcuts->setShortcut(QCoreApplication::translate("ccViewerClass", "F1", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSetViewFront->setText(QCoreApplication::translate("ccViewerClass", "Front", nullptr));
#if QT_CONFIG(shortcut)
        actionSetViewFront->setShortcut(QCoreApplication::translate("ccViewerClass", "5", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSetViewBack->setText(QCoreApplication::translate("ccViewerClass", "Back", nullptr));
#if QT_CONFIG(shortcut)
        actionSetViewBack->setShortcut(QCoreApplication::translate("ccViewerClass", "0", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSetViewLeft->setText(QCoreApplication::translate("ccViewerClass", "Left", nullptr));
#if QT_CONFIG(shortcut)
        actionSetViewLeft->setShortcut(QCoreApplication::translate("ccViewerClass", "4", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSetViewRight->setText(QCoreApplication::translate("ccViewerClass", "Right", nullptr));
#if QT_CONFIG(shortcut)
        actionSetViewRight->setShortcut(QCoreApplication::translate("ccViewerClass", "6", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSetViewTop->setText(QCoreApplication::translate("ccViewerClass", "Top", nullptr));
#if QT_CONFIG(shortcut)
        actionSetViewTop->setShortcut(QCoreApplication::translate("ccViewerClass", "8", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSetViewBottom->setText(QCoreApplication::translate("ccViewerClass", "Bottom", nullptr));
#if QT_CONFIG(shortcut)
        actionSetViewBottom->setShortcut(QCoreApplication::translate("ccViewerClass", "2", nullptr));
#endif // QT_CONFIG(shortcut)
        actionShowColors->setText(QCoreApplication::translate("ccViewerClass", "Show Colors", nullptr));
#if QT_CONFIG(shortcut)
        actionShowColors->setShortcut(QCoreApplication::translate("ccViewerClass", "C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionShowNormals->setText(QCoreApplication::translate("ccViewerClass", "Show Normals", nullptr));
#if QT_CONFIG(shortcut)
        actionShowNormals->setShortcut(QCoreApplication::translate("ccViewerClass", "N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionShowColorRamp->setText(QCoreApplication::translate("ccViewerClass", "Show Color ramp", nullptr));
#if QT_CONFIG(shortcut)
        actionShowColorRamp->setShortcut(QCoreApplication::translate("ccViewerClass", "R", nullptr));
#endif // QT_CONFIG(shortcut)
        actionShowScalarField->setText(QCoreApplication::translate("ccViewerClass", "Show Scalar field", nullptr));
#if QT_CONFIG(shortcut)
        actionShowScalarField->setShortcut(QCoreApplication::translate("ccViewerClass", "S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionDummyAction->setText(QCoreApplication::translate("ccViewerClass", "DummyAction", nullptr));
        actionDelete->setText(QCoreApplication::translate("ccViewerClass", "Delete", nullptr));
#if QT_CONFIG(shortcut)
        actionDelete->setShortcut(QCoreApplication::translate("ccViewerClass", "Del", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSetOrthoView->setText(QCoreApplication::translate("ccViewerClass", "Orthographic projection", nullptr));
#if QT_CONFIG(tooltip)
        actionSetOrthoView->setToolTip(QCoreApplication::translate("ccViewerClass", "Set orthographic projection for current 3D View", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionSetOrthoView->setStatusTip(QCoreApplication::translate("ccViewerClass", "Set orthographic projection for current 3D View", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        actionSetOrthoView->setShortcut(QCoreApplication::translate("ccViewerClass", "F2", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSetCenteredPerspectiveView->setText(QCoreApplication::translate("ccViewerClass", "Object-centered perspective", nullptr));
#if QT_CONFIG(tooltip)
        actionSetCenteredPerspectiveView->setToolTip(QCoreApplication::translate("ccViewerClass", "Set object-centered perspective for current 3D View", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionSetCenteredPerspectiveView->setStatusTip(QCoreApplication::translate("ccViewerClass", "Set object-centered perspective for current 3D View", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        actionSetCenteredPerspectiveView->setShortcut(QCoreApplication::translate("ccViewerClass", "F3", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSetViewerPerspectiveView->setText(QCoreApplication::translate("ccViewerClass", "Viewer-based perspective", nullptr));
#if QT_CONFIG(tooltip)
        actionSetViewerPerspectiveView->setToolTip(QCoreApplication::translate("ccViewerClass", "Set viewer-based perspective for current 3D View", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionSetViewerPerspectiveView->setStatusTip(QCoreApplication::translate("ccViewerClass", "Set viewer-based perspective for current 3D View", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        actionSetViewerPerspectiveView->setShortcut(QCoreApplication::translate("ccViewerClass", "F4", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSetPivotAlwaysOn->setText(QCoreApplication::translate("ccViewerClass", "Always visible", nullptr));
#if QT_CONFIG(tooltip)
        actionSetPivotAlwaysOn->setToolTip(QCoreApplication::translate("ccViewerClass", "Pivot always visible", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionSetPivotAlwaysOn->setStatusTip(QCoreApplication::translate("ccViewerClass", "Pivot always visible", nullptr));
#endif // QT_CONFIG(statustip)
        actionSetPivotRotationOnly->setText(QCoreApplication::translate("ccViewerClass", "Rotation only", nullptr));
#if QT_CONFIG(tooltip)
        actionSetPivotRotationOnly->setToolTip(QCoreApplication::translate("ccViewerClass", "Pivot visible when rotating", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionSetPivotRotationOnly->setStatusTip(QCoreApplication::translate("ccViewerClass", "Pivot visible when rotating", nullptr));
#endif // QT_CONFIG(statustip)
        actionSetPivotOff->setText(QCoreApplication::translate("ccViewerClass", "Never visible", nullptr));
#if QT_CONFIG(tooltip)
        actionSetPivotOff->setToolTip(QCoreApplication::translate("ccViewerClass", "Pivot never visible", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionSetPivotOff->setStatusTip(QCoreApplication::translate("ccViewerClass", "Pivot never visible", nullptr));
#endif // QT_CONFIG(statustip)
        actionSetViewIso1->setText(QCoreApplication::translate("ccViewerClass", "Iso front", nullptr));
#if QT_CONFIG(tooltip)
        actionSetViewIso1->setToolTip(QCoreApplication::translate("ccViewerClass", "Set view to 'front' isometric", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionSetViewIso1->setStatusTip(QCoreApplication::translate("ccViewerClass", "Set view to 'front' isometric", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        actionSetViewIso1->setShortcut(QCoreApplication::translate("ccViewerClass", "7", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSetViewIso2->setText(QCoreApplication::translate("ccViewerClass", "Iso back", nullptr));
#if QT_CONFIG(tooltip)
        actionSetViewIso2->setToolTip(QCoreApplication::translate("ccViewerClass", "Set view to 'back' isometric", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionSetViewIso2->setStatusTip(QCoreApplication::translate("ccViewerClass", "Set view to 'back' isometric", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        actionSetViewIso2->setShortcut(QCoreApplication::translate("ccViewerClass", "9", nullptr));
#endif // QT_CONFIG(shortcut)
        actionEnable3DMouse->setText(QCoreApplication::translate("ccViewerClass", "Enable", nullptr));
        actionZoomOnSelectedEntity->setText(QCoreApplication::translate("ccViewerClass", "Zoom on", nullptr));
#if QT_CONFIG(shortcut)
        actionZoomOnSelectedEntity->setShortcut(QCoreApplication::translate("ccViewerClass", "Z", nullptr));
#endif // QT_CONFIG(shortcut)
        actionGlobalZoom->setText(QCoreApplication::translate("ccViewerClass", "Global Zoom", nullptr));
#if QT_CONFIG(statustip)
        actionGlobalZoom->setStatusTip(QCoreApplication::translate("ccViewerClass", "Global Zoom", nullptr));
#endif // QT_CONFIG(statustip)
        actionNoFilter->setText(QCoreApplication::translate("ccViewerClass", "Remove", nullptr));
        actionLockRotationVertAxis->setText(QCoreApplication::translate("ccViewerClass", "Lock rotation around vert. axis", nullptr));
#if QT_CONFIG(shortcut)
        actionLockRotationVertAxis->setShortcut(QCoreApplication::translate("ccViewerClass", "L", nullptr));
#endif // QT_CONFIG(shortcut)
        actionEnableStereo->setText(QCoreApplication::translate("ccViewerClass", "Stereo mode", nullptr));
#if QT_CONFIG(tooltip)
        actionEnableStereo->setToolTip(QCoreApplication::translate("ccViewerClass", "Enable stereo mode (with red-blue or red-cyan glasses)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionEnableStereo->setShortcut(QCoreApplication::translate("ccViewerClass", "F10", nullptr));
#endif // QT_CONFIG(shortcut)
        actionShowMaterials->setText(QCoreApplication::translate("ccViewerClass", "Show Texture/Materials", nullptr));
#if QT_CONFIG(shortcut)
        actionShowMaterials->setShortcut(QCoreApplication::translate("ccViewerClass", "M", nullptr));
#endif // QT_CONFIG(shortcut)
        menuOptions->setTitle(QCoreApplication::translate("ccViewerClass", "Options", nullptr));
        menuPerspective->setTitle(QCoreApplication::translate("ccViewerClass", "Perspective", nullptr));
        menuLights->setTitle(QCoreApplication::translate("ccViewerClass", "Lights", nullptr));
        menuStandardViews->setTitle(QCoreApplication::translate("ccViewerClass", "Standard views", nullptr));
        menuSelected->setTitle(QCoreApplication::translate("ccViewerClass", "Selected entity", nullptr));
        menuSelectSF->setTitle(QCoreApplication::translate("ccViewerClass", "Current S.F.", nullptr));
        menuRotationSymbol->setTitle(QCoreApplication::translate("ccViewerClass", "Rotation symbol", nullptr));
        menu3DMouse->setTitle(QCoreApplication::translate("ccViewerClass", "3D mouse", nullptr));
        menuAbout->setTitle(QCoreApplication::translate("ccViewerClass", "Help", nullptr));
        menuPlugins->setTitle(QCoreApplication::translate("ccViewerClass", "Shaders", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ccViewerClass: public Ui_ccViewerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CCVIEWER_H
