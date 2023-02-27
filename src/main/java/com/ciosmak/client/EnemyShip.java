package com.ciosmak.client;

import com.ciosmak.observer.Observer;

public class EnemyShip implements Observer
{
    @Override
    public void update()
    {
        System.out.println("An enemy ship has been detected.");
    }
}
