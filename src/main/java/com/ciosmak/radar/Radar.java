package com.ciosmak.radar;

import com.ciosmak.client.EnemyShip;
import com.ciosmak.client.FriendlyShip;
import com.ciosmak.observer.Observer;

import java.util.ArrayList;
import java.util.List;
import java.util.Random;

public class Radar
{
    private static final double CHANCE_FOR_AN_ENEMY_SHIP = 0.05;

    private static final double CHANCE_FOR_A_FRIENDLY_SHIP = 0.10;

    List<Observer> subscribers;

    public Radar()
    {
        this.subscribers = new ArrayList<>();
    }

    public void addSubscriber(Observer observer)
    {
        subscribers.add(observer);
    }

    public void removeSubscriber(Observer observer)
    {
        subscribers.remove(subscribers);
    }

    public void startWork()
    {
        while (true)
        {
            notifyAboutNewShip();
        }
    }

    private void notifyAboutNewShip()
    {
        notifyAboutNewFriendlyShip();
        notifyAboutNewEnemyShip();
    }

    private void notifyAboutNewFriendlyShip()
    {
        if (newFriendlyShipAppeared())
        {
            for (Observer subscriber : subscribers)
            {
                if (subscriber instanceof FriendlyShip)
                {
                    subscriber.update();
                }
            }
        }
    }

    private void notifyAboutNewEnemyShip()
    {
        if (newEnemyShipAppeared())
        {
            for (Observer subscriber : subscribers)
            {
                if (subscriber instanceof EnemyShip)
                {
                    subscriber.update();
                }
            }
        }
    }

    private boolean newFriendlyShipAppeared()
    {
        return new Random().nextDouble() < CHANCE_FOR_AN_ENEMY_SHIP;
    }

    private boolean newEnemyShipAppeared()
    {
        return new Random().nextDouble() < CHANCE_FOR_A_FRIENDLY_SHIP;
    }
}
