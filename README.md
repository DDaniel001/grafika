# LEGO Viewer Room – Interaktív 3D LEGO bemutatóterem

## Projekt leírása

Ez a féléves számítógépes grafika projekt egy interaktív 3D-s bemutatótermet valósít meg, ahol a felhasználó LEGO modelleket nézhet meg, sétálhat körülöttük, és egyszerű animációk segítségével szétszedheti, majd újra összerakhatja őket.

## Fő funkciók (kötelező elemek)

- **Kamerakezelés**: Mozgás WASD billentyűkkel, nézelődés egérrel.
- **Modellek betöltése**: LEGO modellek fájlból (.obj, .gltf stb.) töltődnek be.
- **Textúrák/színezés**: A LEGO elemek saját színekkel vagy textúrával rendelkeznek.
- **Animáció**: Egy billentyűre a modell elemei szétszedhetők, másikra újra összeállnak.
- **Fénykezelés**: A világítás erőssége `+` és `-` gombokkal állítható.
- **Segítség**: `F1` megnyomásával megjelenik egy használati útmutató.

## Többletfunkciók

- **Objektum kijelölése egérrel**: Egy modell kijelölése esetén kiemelést kap.
- **Részecskeeffekt**: A szétszedés során kis vizuális effekt jelenik meg (pl. csillanás).
- **Felhasználói felület**: Gombok és menük segítik az interakciókat (modellváltás, animáció indítás stb.).
- **Ütközésvizsgálat**: A kamera nem mehet bele az objektumokba vagy falakba.

## Megjegyzés

A LEGO modellek nem valós fizikai szimuláció alapján szerelődnek szét/össze, hanem előre megtervezett animáció segítségével. Az alkalmazás célja a 3D grafikai technikák bemutatása egy egyszerű, játékos környezeten keresztül.