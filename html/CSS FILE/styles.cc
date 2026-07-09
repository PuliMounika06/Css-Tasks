body {
    display: flex;
    justify-content: center;
    align-items: center;
    height: 100vh;
    background: #f0f0f0;
}

.flag {
    width: 450px;
    border: 1px solid #000;
}

.saffron {
    height: 100px;
    background: #FF9933;
}

.white {
    height: 100px;
    background: white;
    display: flex;
    justify-content: center;
    align-items: center;
}

.green {
    height: 100px;
    background: #138808;
}

.chakra {
    width: 70px;
    height: 70px;
    border: 4px solid navy;
    border-radius: 50%;
    position: relative;
    animation: rotateChakra 4s linear infinite;
}

/* Spokes */
.chakra::before,
.chakra::after {
    content: "";
    position: absolute;
    background: navy;
}

.chakra::before {
    width: 2px;
    height: 70px;
    left: 50%;
    top: 0;
    transform: translateX(-50%);
}

.chakra::after {
    width: 70px;
    height: 2px;
    top: 50%;
    left: 0;
    transform: translateY(-50%);
}

@keyframes rotateChakra {
    from {
        transform: rotate(0deg);
    }
    to {
        transform: rotate(360deg);
    }
}