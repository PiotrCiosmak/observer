package com.ciosmak.client;

import com.ciosmak.observer.Observer;

public class FriendlyShip implements Observer
{

    @Override
    public void update()
    {
        System.out.println("A friendly ship has been detected.");
    }
}
