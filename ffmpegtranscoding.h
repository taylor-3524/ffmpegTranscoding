#ifndef FFMPEGTRANSCODING_H
#define FFMPEGTRANSCODING_H

#include <QMainWindow>

namespace Ui {
class ffmpegTranscoding;
}

class ffmpegTranscoding : public QMainWindow
{
    Q_OBJECT

public:
    explicit ffmpegTranscoding(QWidget *parent = 0);
    ~ffmpegTranscoding();

public slots:
    void openFloder_btn_Clicked();
    void copy_btn_Clicked();

private:
    Ui::ffmpegTranscoding *ui;
};

#endif // FFMPEGTRANSCODING_H
