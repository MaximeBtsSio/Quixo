#ifndef PIECE_H
#define PIECE_H
#include <QGraphicsPixmapItem>

class piece:public QGraphicsPixmapItem
{
public:
    enum couleur_piece {piece_neutre = 0, piece_rond =1, piece_croix=2};
    explicit piece();

    bool estJouable(couleur_piece joueur, couleur_piece pieceSelect);
    int16_t x;
    int16_t y;

    protected:
    void mouseClickedEvent (QGraphicsSceneMouseEvent * event);
    //void mouseMouseEvent (QGraphicsSceneMouseEvent * event);

    private:
    std ::vector<QPixmap *>pixmapCollection;
    couleur_piece couleur;

};

#endif // PIECE_H
