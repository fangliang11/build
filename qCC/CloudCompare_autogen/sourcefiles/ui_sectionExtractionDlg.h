/********************************************************************************
** Form generated from reading UI file 'sectionExtractionDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECTIONEXTRACTIONDLG_H
#define UI_SECTIONEXTRACTIONDLG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_SectionExtractionDlg
{
public:
    QHBoxLayout *horizontalLayout_2;
    QToolButton *polylineToolButton;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QToolButton *importFromDBToolButton;
    QToolButton *generateOrthoSectionsToolButton;
    QToolButton *extractPointsToolButton;
    QToolButton *unfoldToolButton;
    QToolButton *exportSectionsToolButton;
    QToolButton *undoToolButton;
    QToolButton *cancelToolButton;
    QToolButton *validToolButton;
    QLabel *label;
    QComboBox *vertAxisComboBox;

    void setupUi(QDialog *SectionExtractionDlg)
    {
        if (SectionExtractionDlg->objectName().isEmpty())
            SectionExtractionDlg->setObjectName(QString::fromUtf8("SectionExtractionDlg"));
        SectionExtractionDlg->resize(399, 36);
        horizontalLayout_2 = new QHBoxLayout(SectionExtractionDlg);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(2, 2, 2, 2);
        polylineToolButton = new QToolButton(SectionExtractionDlg);
        polylineToolButton->setObjectName(QString::fromUtf8("polylineToolButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/CC/images/dbPolylineSymbol.png"), QSize(), QIcon::Normal, QIcon::Off);
        polylineToolButton->setIcon(icon);
        polylineToolButton->setCheckable(true);

        horizontalLayout_2->addWidget(polylineToolButton);

        frame = new QFrame(SectionExtractionDlg);
        frame->setObjectName(QString::fromUtf8("frame"));
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        importFromDBToolButton = new QToolButton(frame);
        importFromDBToolButton->setObjectName(QString::fromUtf8("importFromDBToolButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/CC/images/dbHObjectSymbol.png"), QSize(), QIcon::Normal, QIcon::Off);
        importFromDBToolButton->setIcon(icon1);

        horizontalLayout->addWidget(importFromDBToolButton);

        generateOrthoSectionsToolButton = new QToolButton(frame);
        generateOrthoSectionsToolButton->setObjectName(QString::fromUtf8("generateOrthoSectionsToolButton"));
        generateOrthoSectionsToolButton->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/CC/images/orthoSections.png"), QSize(), QIcon::Normal, QIcon::Off);
        generateOrthoSectionsToolButton->setIcon(icon2);

        horizontalLayout->addWidget(generateOrthoSectionsToolButton);

        extractPointsToolButton = new QToolButton(frame);
        extractPointsToolButton->setObjectName(QString::fromUtf8("extractPointsToolButton"));
        extractPointsToolButton->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/CC/images/sectionExtraction.png"), QSize(), QIcon::Normal, QIcon::Off);
        extractPointsToolButton->setIcon(icon3);

        horizontalLayout->addWidget(extractPointsToolButton);

        unfoldToolButton = new QToolButton(frame);
        unfoldToolButton->setObjectName(QString::fromUtf8("unfoldToolButton"));
        unfoldToolButton->setEnabled(false);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/CC/images/unfoldSmall.png"), QSize(), QIcon::Normal, QIcon::Off);
        unfoldToolButton->setIcon(icon4);

        horizontalLayout->addWidget(unfoldToolButton);

        exportSectionsToolButton = new QToolButton(frame);
        exportSectionsToolButton->setObjectName(QString::fromUtf8("exportSectionsToolButton"));
        exportSectionsToolButton->setEnabled(false);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/CC/images/ccSave.png"), QSize(), QIcon::Normal, QIcon::Off);
        exportSectionsToolButton->setIcon(icon5);

        horizontalLayout->addWidget(exportSectionsToolButton);

        undoToolButton = new QToolButton(frame);
        undoToolButton->setObjectName(QString::fromUtf8("undoToolButton"));
        undoToolButton->setEnabled(false);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/CC/images/smallReset.png"), QSize(), QIcon::Normal, QIcon::Off);
        undoToolButton->setIcon(icon6);

        horizontalLayout->addWidget(undoToolButton);

        cancelToolButton = new QToolButton(frame);
        cancelToolButton->setObjectName(QString::fromUtf8("cancelToolButton"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/CC/images/smallCancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        cancelToolButton->setIcon(icon7);

        horizontalLayout->addWidget(cancelToolButton);

        validToolButton = new QToolButton(frame);
        validToolButton->setObjectName(QString::fromUtf8("validToolButton"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/CC/images/smallValidate.png"), QSize(), QIcon::Normal, QIcon::Off);
        validToolButton->setIcon(icon8);

        horizontalLayout->addWidget(validToolButton);

        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        vertAxisComboBox = new QComboBox(frame);
        vertAxisComboBox->addItem(QString::fromUtf8("X"));
        vertAxisComboBox->addItem(QString::fromUtf8("Y"));
        vertAxisComboBox->addItem(QString::fromUtf8("Z"));
        vertAxisComboBox->setObjectName(QString::fromUtf8("vertAxisComboBox"));

        horizontalLayout->addWidget(vertAxisComboBox);


        horizontalLayout_2->addWidget(frame);


        retranslateUi(SectionExtractionDlg);
        QObject::connect(polylineToolButton, SIGNAL(toggled(bool)), frame, SLOT(setDisabled(bool)));

        vertAxisComboBox->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(SectionExtractionDlg);
    } // setupUi

    void retranslateUi(QDialog *SectionExtractionDlg)
    {
        SectionExtractionDlg->setWindowTitle(QCoreApplication::translate("SectionExtractionDlg", "Section Extraction", nullptr));
#if QT_CONFIG(tooltip)
        polylineToolButton->setToolTip(QCoreApplication::translate("SectionExtractionDlg", "Create polyline by clicking on the screen", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        importFromDBToolButton->setToolTip(QCoreApplication::translate("SectionExtractionDlg", "Import one or several polylines from DB", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        generateOrthoSectionsToolButton->setToolTip(QCoreApplication::translate("SectionExtractionDlg", "Generate orthogonal sections along a path", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        extractPointsToolButton->setToolTip(QCoreApplication::translate("SectionExtractionDlg", "Extract points along active sections", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        unfoldToolButton->setToolTip(QCoreApplication::translate("SectionExtractionDlg", "Unfold the points along the selected polyline", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        exportSectionsToolButton->setToolTip(QCoreApplication::translate("SectionExtractionDlg", "Export manually defined sections to DB", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        undoToolButton->setToolTip(QCoreApplication::translate("SectionExtractionDlg", "Undo last polyline(s) addition", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        validToolButton->setToolTip(QCoreApplication::translate("SectionExtractionDlg", "Close the tool", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        validToolButton->setStatusTip(QCoreApplication::translate("SectionExtractionDlg", "Close the tool", nullptr));
#endif // QT_CONFIG(statustip)
        validToolButton->setText(QCoreApplication::translate("SectionExtractionDlg", "OK", nullptr));
        label->setText(QCoreApplication::translate("SectionExtractionDlg", "Vert.", nullptr));

    } // retranslateUi

};

namespace Ui {
    class SectionExtractionDlg: public Ui_SectionExtractionDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECTIONEXTRACTIONDLG_H
